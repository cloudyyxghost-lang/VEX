#include "vex.h"
#include "drivingfunctions.h"
void tankDrive(){
  if(abs(Controller1.Axis3.value())>5||abs(Controller1.Axis2.value())){
    LeftMotor.spin(fwd, Controller1.Axis3.value(), pct);
    RightMotor.spin(fwd, Controller1.Axis2.value(),pct);
  }else{
    LeftMotor.stop(coast);
    RightMotor.stop(coast);
  }
}