#ifndef  __ROS_LOCOMOTION_MGR__
#define  __ROS_LOCOMOTION_MGR__


#include "interfaces/ros_subscription_iface.h"
#include "interfaces/locomotion_drive_iface.h"
#include "components/microros_app/microros_app.h"
#include "geometry_msgs/msg/twist.h"

enum direction_t {
	forward = 1,
	backward = 2,
	right = 3,
	left =4
};

struct LocomotionCmd
 {
    uint8_t direction;
    uint8_t speed;
	uint8_t duration;

 } locomotionCmd_t;


class locomotion_mgr : public ros_subscription_iface {
    public:
        locomotion_mgr();
        void attach(microros_app *app);
        void release();

        void setDrive( *driveCtrl);
        locomotion_drive_iface* getDrive() { return m_driveCtrl;}

    private:
        microros_app*               m_app;
        
        QueueHandle_t               m_locomotionCmdQueue;
        geometry_msgs__msg__Twist   m_velocity_msg;
        rcl_subscription_t          m_velocity_subscription;

        locomotion_drive_iface*     m_driveCtrl;
};

#endif