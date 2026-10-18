#include "robot-config.h"
#include "autonomous-functions.h"
#include "vex.h"

void setMotorTimeout (int timeseconds) {
    LeftMotor.setTimeout (timeseconds, sec);
    RightMotor.setTimeout (timeseconds, sec);
}
void driveForward (double distancecm, int timeseconds, int speedpct) {

}