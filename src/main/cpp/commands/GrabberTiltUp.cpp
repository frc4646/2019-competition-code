/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/GrabberTiltUp.h"

GrabberTiltUp::GrabberTiltUp() {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  //Requires tilt subsystem.
  Requires((frc::Subsystem*) grab.get());
  //Assumes popper is not extended.
}

// Called just before this Command runs the first time
void GrabberTiltUp::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void GrabberTiltUp::Execute() {
  grab->TiltUp();
}

// Make this return true when this Command no longer needs to run execute()
bool GrabberTiltUp::IsFinished() { return false; }

// Called once after isFinished returns true
void GrabberTiltUp::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void GrabberTiltUp::Interrupted() {}
