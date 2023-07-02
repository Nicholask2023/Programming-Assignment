#include "main.h"

//HELPER FUNCTIONS
void setDrive(int left, int right) {
    driveLeftBack = left;
    driveLeftFront = left;
    driveRightBack = right;
    driveRightFront = right;
}

//DRIVER CONTROL FUNCTIONS
void setDriveMotors() {
   int leftJoyStick = controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y);
   int rightJoyStick = controller.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_Y);
   if(abs(leftJoyStick) < 10)
   leftJoyStick = 0;
   if(abs(rightJoyStick) < 10)
   rightJoyStick = 0;
   setDrive(leftJoyStick, rightJoystick);
}
