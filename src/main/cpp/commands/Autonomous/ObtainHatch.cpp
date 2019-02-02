/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/Autonomous/ObtainHatch.h"

ObtainHatch::ObtainHatch() {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  //Requires grabber subsystem.
  //Assumes grabber is closed and popper is not extended.
}

// Called just before this Command runs the first time
void ObtainHatch::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void ObtainHatch::Execute() {
  //Open Grabber to fit inside hatch hole.
}

// Make this return true when this Command no longer needs to run execute()
bool ObtainHatch::IsFinished() { return false; }

// Called once after isFinished returns true
void ObtainHatch::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ObtainHatch::Interrupted() {}
