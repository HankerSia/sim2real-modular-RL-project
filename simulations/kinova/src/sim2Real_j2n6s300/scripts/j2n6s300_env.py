#!/usr/bin/env python
import rospy
from openai_ros import robot_gazebo_env
from std_msgs.msg import Float64
from sensor_msgs.msg import JointState
from trajectory_msgs.msg import JointTrajectory
from trajectory_msgs.msg import JointTrajectoryPoint
from gazebo_msgs.msg import LinkStates
import time
from gazebo_msgs.srv import SetModelConfiguration, SetModelConfigurationRequest
from gazebo_msgs.msg import ContactsState
from geometry_msgs.msg import Pose, PoseArray
import tf

class j2n6s300Env(robot_gazebo_env.RobotGazeboEnv):
    """Superclass for all Robot environments.
    """

    def __init__(self):
        """Initializes a new Robot environment.
        """
        # Variables that we give through the constructor.

        # Internal Vars
        self.controllers_list=['joint_1_position_controller',
                                                'joint_2_position_controller',
                                                'joint_3_position_controller',
                                                'joint_4_position_controller',
                                                'joint_5_position_controller',
                                                'joint_6_position_controller',
                                                'finger_1_position_controller',
                                                'finger_2_position_controller',
                                                'finger_3_position_controller',
                                                'joint_state_controller']

        self.robot_name_space = "j2n6s300"

        reset_controls_bool = True 

        # We launch the init function of the Parent Class robot_gazebo_env.RobotGazeboEnv

        super(j2n6s300Env, self).__init__(controllers_list=self.controllers_list,
                                                robot_name_space=self.robot_name_space,
                                                reset_controls=reset_controls_bool,
                                                reset_world_or_sim="WORLD")





        # We Start all the ROS related Subscribers and publishers        
        self.joint_states_sub = rospy.Subscriber('/j2n6s300/joint_states', JointState, self.joint_states_callback) 
        #self.link_states_sub = rospy.Subscriber('/j2n6s300/link_states', LinkStates, self.link_states_callback) 
        self.link_states_sub = rospy.Subscriber('/gazebo/link_states', LinkStates, self.link_states_callback) 
        

        self.collision_sub = rospy.Subscriber('/j2n6s300/collision', ContactsState, self.collision_callback)
        
        self.pub = rospy.Publisher( '/j2n6s300/effort_joint_trajectory_controller/command', JointTrajectory, queue_size=1)
        self.pubf = rospy.Publisher( '/j2n6s300/effort_finger_trajectory_controller/command', JointTrajectory, queue_size=1)  


        self.joint_1_pos_pub = rospy.Publisher('/j2n6s300/joint_1_position_controller/command', Float64, queue_size=1)
        self.joint_2_pos_pub = rospy.Publisher('/j2n6s300/joint_2_position_controller/command', Float64, queue_size=1)
        self.joint_3_pos_pub = rospy.Publisher('/j2n6s300/joint_3_position_controller/command', Float64, queue_size=1)
        self.joint_4_pos_pub = rospy.Publisher('/j2n6s300/joint_4_position_controller/command', Float64, queue_size=1)
        self.joint_5_pos_pub = rospy.Publisher('/j2n6s300/joint_5_position_controller/command', Float64, queue_size=1)
        self.joint_6_pos_pub = rospy.Publisher('/j2n6s300/joint_6_position_controller/command', Float64, queue_size=1)
        self.finger_1_tip_pub = rospy.Publisher('/j2n6s300/finger_tip_1_position_controller/command', Float64, queue_size=1)
        self.finger_2_tip_pub = rospy.Publisher('/j2n6s300/finger_tip_2_position_controller/command', Float64, queue_size=1)
        self.finger_3_tip_pub = rospy.Publisher('/j2n6s300/finger_tip_3_position_controller/command', Float64, queue_size=1)
    
        self.collision_states = ContactsState()
    # Methods needed by the RobotGazeboEnv
    # ----------------------------
    
    

    def _check_all_systems_ready(self):
        """
        Checks that all the sensors, publishers and other simulation systems are
        operational.
        """
        self._check_all_sensors_ready()
        return True
    
    def _set_model_config(self):
        rospy.wait_for_service('/gazebo/set_model_configuration')
        set_model_srv = rospy.ServiceProxy('/gazebo/set_model_configuration', SetModelConfiguration)
        model_config = SetModelConfigurationRequest()
        model_config.model_name = 'j2n6s300'
        model_config.urdf_param_name = '/robot_description'
        model_config.joint_names = self.joint_names
        model_config.joint_positions =  self.init_pose
        result = set_model_srv(model_config)
        
        
    # Methods that the TrainingEnvironment will need to define here as virtual
    # because they will be used in RobotGazeboEnv GrandParentClass and defined in the
    # TrainingEnvironment.
    # ----------------------------
    def _set_init_pose(self):
        """Sets the Robot in its init pose
        """
        raise NotImplementedError()
    
    
    def _init_env_variables(self):
        """Inits variables needed to be initialised each time we reset at the start
        of an episode.
        """
        raise NotImplementedError()

    def _compute_reward(self, observations, done):
        """Calculates the reward to give based on the observations given.
        """
        raise NotImplementedError()

    def _set_action(self, action):
        """Applies the given action to the simulation.
        """
        raise NotImplementedError()

    def _get_obs(self):
        raise NotImplementedError()

    def _is_done(self, observations):
        """Checks if episode done based on observations given.
        """
        raise NotImplementedError()
        
    
        
    # Methods that the TrainingEnvironment will need.
    # ----------------------------

    
    def move_joints(self, jointcmds, duration=1.0, execute_duration=0.25):

        jointCmd = JointTrajectory()  
        jointCmd_finger = JointTrajectory()  
        point = JointTrajectoryPoint()
        pointf = JointTrajectoryPoint()
        jointCmd.header.stamp = rospy.Time.now() + rospy.Duration.from_sec(0.0);  
        point.time_from_start = rospy.Duration.from_sec(duration)
        jointCmd_finger.header.stamp = rospy.Time.now() + rospy.Duration.from_sec(0.0);  
        pointf.time_from_start = rospy.Duration.from_sec(duration)
        print('step:',  self.n_step, "Sim-Time for step [ms]: " +str((rospy.Time.now() - self.timer)/1000000 ), 'min dist: ', self.min_distance )
        self.timer = rospy.Time.now()
        self.timer_real = time.time()
        
        for i in range(0, 6):
            jointCmd.joint_names.append('j2n6s300_joint_'+str(i+1))
            point.positions.append(jointcmds[i])
            point.velocities.append(0)
            point.accelerations.append(0)
            point.effort.append(0) 
        jointCmd.points.append(point)                
        for i in range(0, 3):
            jointCmd_finger.joint_names.append('j2n6s300_joint_finger_'+str(i+1))
            pointf.positions.append(jointcmds[i+6])
            pointf.velocities.append(0)
            pointf.accelerations.append(0)
            pointf.effort.append(0) 
        jointCmd_finger.points.append(pointf)

        
        while not rospy.is_shutdown():
            connections = self.pub.get_num_connections()
            if connections > 0:
                self.pub.publish(jointCmd)
                self.pubf.publish(jointCmd_finger)
                self.finger_1_tip_pub.publish(0)
                self.finger_2_tip_pub.publish(0)
                self.finger_3_tip_pub.publish(0)
                
                break    
        
        #wait unitil joints have been moved    
        while rospy.Time.now() < self.timer + rospy.Duration.from_sec(execute_duration) and not rospy.is_shutdown():
            if not self.reset_mode:
                if self.collision_bool: 
                    self.consecutive_errors += 1
                    rospy.logerr("Collision!")
                    break
                rospy.Rate(100).sleep()

        

            
            
                
        
    def collision_check(self):
        #print(self.collision_states.states)
        if len(self.collision_states.states) == 0:            
            self.collision_bool = False
        else:
            rospy.logerr("Collision!")
            self.consecutive_errors += 1
            self.collision_bool = True 
        return self.collision_bool
            
    def ground_collision_check(self):
        z_array = self.tf_transform()
        del z_array[0]
        del z_array[0]
        if min(z_array) < 0.1:
            rospy.logerr("Too close to ground! ...backtracking and giving negative reward")
            self.consecutive_errors += 1
            self.collision_bool = True            
        else:
            self.collision_bool = False
        return self.collision_bool
        
            
    
    def get_joints(self):
        return self.joints
    
    def tf_transform(self):
        z_array = []
        for  pose in self.link_states.pose:            
            z_array.append(pose.position.z)
        return z_array

    
    # Methods that the Robot Environment will need.
    # ----------------------------
    def _check_all_sensors_ready(self):
        self._check_subscribers_ready()

        rospy.logdebug("ALL SENSORS READY")

    def _check_subscribers_ready(self):
        self.joints = None
        while self.joints is None and not rospy.is_shutdown():
            try:
                self.joints = rospy.wait_for_message("/j2n6s300/joint_states", JointState, timeout=1.0)
                rospy.logdebug("Current /joint_states READY=>" + str(self.joints))    
            except:
                rospy.logerr("Current /joint_states not ready yet, retrying for getting joint_states")
    
    def joint_states_callback(self, msg):
        self.joints = msg

    
    def link_states_callback(self, msg):
        self.link_states = msg
        
    def collision_callback(self, msg):
        if not len(msg.states) == 0:  
            self.collision_bool = True 
        
