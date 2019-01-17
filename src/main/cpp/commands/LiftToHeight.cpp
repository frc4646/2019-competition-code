/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/LiftToHeight.h"

LiftToHeight::LiftToHeight(double distance) {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());

  // Requires the lift subsystem.
}

// Called just before this Command runs the first time
void LiftToHeight::Initialize() {
  // Send the lift to height command to the subsystem.
}

// Called repeatedly when this Command is scheduled to run
void LiftToHeight::Execute() {
  // Don't do anything here since this command simply runs once.
}

// Make this return true when this Command no longer needs to run execute()
bool LiftToHeight::IsFinished() {
  // Ask the subsystem whether or not the lift has reached the correct height, then return the bool.
}

// Called once after isFinished returns true
void LiftToHeight::End() {
  // Nothing here because the subsytem should handle stopping the mechanism.
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LiftToHeight::Interrupted() {}
