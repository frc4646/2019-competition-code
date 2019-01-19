/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/GrabberTiltDown.h"

GrabberTiltDown::GrabberTiltDown() {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  //Requires tilt subsystem.
  //Assumes popper is not extended.
}

// Called just before this Command runs the first time
void GrabberTiltDown::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void GrabberTiltDown::Execute() {
  //Time Based: (Better for Tele-Op)
    //Tilt down at inputed power.
    //Sleep for a certain amount of milliseconds.
    //Stop tilting down.

  //Position Based: (Better for Autonomous)
    //Set target position to inputed position.
    //Check position of tilt subsystem.
    //If tilt position is not at target position, stop. Else:
    //Set tilt position to inputed position.
}

// Make this return true when this Command no longer needs to run execute()
bool GrabberTiltDown::IsFinished() { return false; }

// Called once after isFinished returns true
void GrabberTiltDown::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void GrabberTiltDown::Interrupted() {}
