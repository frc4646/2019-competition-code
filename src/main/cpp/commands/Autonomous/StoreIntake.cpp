/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/Autonomous/StoreIntake.h"

StoreIntake::StoreIntake() {
  // Store intake same as intake intake
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  // Requires Intake Subsystem
}

// Called just before this Command runs the first time
void StoreIntake::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void StoreIntake::Execute() {
  // Put intake inside of chassis for start and for when it is not being used
}

// Make this return true when this Command no longer needs to run execute()
bool StoreIntake::IsFinished() { 
  return false; 
}

// Called once after isFinished returns true
void StoreIntake::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void StoreIntake::Interrupted() {

}
