#include "robot-config.h"

using namespace vex;

brain Brain;

// Define the devices (Port, Gearset, Reversed)
motor LeftMotor = motor(PORT1, ratio18_1, false);
motor RightMotor = motor(PORT2, ratio18_1, true); // Reversed
controller Controller1 = controller(primary);

void robotInstanceInit(void) {
  // Initialization code if needed (e.g., calibrating inertial sensors)
}
int x=0;