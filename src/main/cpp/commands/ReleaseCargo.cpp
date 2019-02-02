/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/ReleaseCargo.h"

ReleaseCargo::ReleaseCargo() {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  //Requires grabber subsystem, and tilt subsystem.
  //Assumes grabber is closed on cargo and popper is not extended.
}

// Called just before this Command runs the first time
void ReleaseCargo::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void ReleaseCargo::Execute() {
  //Tilts the tilt subsystem to a certain degree.
  //Open grabber to drop cargo.
}

// Make this return true when this Command no longer needs to run execute()
bool ReleaseCargo::IsFinished() { return false; }

// Called once after isFinished returns true
void ReleaseCargo::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ReleaseCargo::Interrupted() {}
