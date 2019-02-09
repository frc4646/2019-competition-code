/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/IntakeCargo.h"

IntakeCargo::IntakeCargo() : CommandBase("IntakeCargo") {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  Requires((frc::Subsystem*) intake.get());
}

// Called just before this Command runs the first time
void IntakeCargo::Initialize() {
}

// Called repeatedly when this Command is scheduled to run
void IntakeCargo::Execute() {
  intake->SetIntakeSpeed(0.5, 0.5);
}

// Make this return true when this Command no longer needs to run execute()
bool IntakeCargo::IsFinished() { return false; }

// Called once after isFinished returns true
void IntakeCargo::End() {
  intake->SetIntakeSpeed(0, 0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void IntakeCargo::Interrupted() {
  End();
}
