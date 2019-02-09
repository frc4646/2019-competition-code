/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/StoreIntake.h"

StoreIntake::StoreIntake() : CommandBase("StoreIntake") {
  // Store intake same as intake intake
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  // Requires Intake Subsystem
  Requires((frc::Subsystem*) intake.get());
}

// Called just before this Command runs the first time
void StoreIntake::Initialize() {
}

// Called repeatedly when this Command is scheduled to run
void StoreIntake::Execute() {
  intake->CylinderPositionUp();
}

// Make this return true when this Command no longer needs to run execute()
bool StoreIntake::IsFinished() { 
  return intake->IsIntakeStored();
}

// Called once after isFinished returns true
void StoreIntake::End() {
  intake->CylinderPositionOff();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void StoreIntake::Interrupted() {
  End();
}
