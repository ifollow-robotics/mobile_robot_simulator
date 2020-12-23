#include "ros/ros.h"

#include "mobile_robot_simulator/laser_simulator.h"

int main(int argc, char **argv)
{
    ros::init(argc,argv, "laser_simulator");
    ros::NodeHandle nh("~");
        
    LaserScannerSimulator laser_sim(&nh);

    ROS_INFO("--- Starting LaserScanner simulator");

    while (nh.ok()) {
        ros::spinOnce();
    }
    
    return 0;
    
} // end main
