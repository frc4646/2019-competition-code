/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/Autonomous/GrabberTiltDown.h"

GrabberTiltDown::GrabberTiltDown() : CommandBase("GrabberTiltDown") {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  Requires(tilt.get());
  //Assumes popper is not extended.
}

// Called just before this Command runs the first time
void GrabberTiltDown::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void GrabberTiltDown::Execute() {
  //Position Based: (Better for Autonomous)
  tilt->Tilt(direction);

}

// Make this return true when this Command no longer needs to run execute()
bool GrabberTiltDown::IsFinished() { 
  //finished when current angle equals target angle
  if(tilt->getAngle() <= (target + tilt->getTolerance())){
    return true;
  }
  else {
    return false; 
  }
    
}

// Called once after isFinished returns true
void GrabberTiltDown::End() {
  tilt->off();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void GrabberTiltDown::Interrupted() {
  End();
}
