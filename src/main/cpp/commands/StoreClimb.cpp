/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/StoreClimb.h"

StoreClimb::StoreClimb() : CommandBase("StoreClimb") {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  Requires((frc::Subsystem*) slam.get());
}

// Called just before this Command runs the first time
void StoreClimb::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void StoreClimb::Execute() {
  slam->SlamWheelUp();
}

// Make this return true when this Command no longer needs to run execute()
bool StoreClimb::IsFinished() { 
  return slam->IsSlamWheelUp();
}

// Called once after isFinished returns true
void StoreClimb::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void StoreClimb::Interrupted() {
  End();
}
