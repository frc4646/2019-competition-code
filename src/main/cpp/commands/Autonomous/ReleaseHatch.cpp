/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/Autonomous/ReleaseHatch.h"

ReleaseHatch::ReleaseHatch() {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  //Requires grabber subsystem and popper subsystem
  //Assumes grabber is open and popper is not extended.
}

// Called just before this Command runs the first time
void ReleaseHatch::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void ReleaseHatch::Execute() {
  //Close Grabber to release hatch.
}

// Make this return true when this Command no longer needs to run execute()
bool ReleaseHatch::IsFinished() { return false; }

// Called once after isFinished returns true
void ReleaseHatch::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ReleaseHatch::Interrupted() {}
