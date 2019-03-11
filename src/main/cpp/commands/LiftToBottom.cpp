/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/LiftToBottom.h"

LiftToBottom::LiftToBottom() : CommandBase("LiftToBottom"){
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  Requires((frc::Subsystem*) lift.get());
}

// Called just before this Command runs the first time
void LiftToBottom::Initialize() {
}

// Called repeatedly when this Command is scheduled to run
void LiftToBottom::Execute() {
  lift->LiftAtSpeed(-0.2);
}

// Make this return true when this Command no longer needs to run execute()
bool LiftToBottom::IsFinished() { 
  return lift->GetHeight() <= lift->GetMinHeight(); 
}

// Called once after isFinished returns true
void LiftToBottom::End() {
  lift->HoldHeight();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LiftToBottom::Interrupted() {
  End();
}
