/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/IntakeControl.h"

IntakeControl::IntakeControl() : CommandBase("IntakeControl") {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  Requires((frc::Subsystem*) intake.get());
}

// Called just before this Command runs the first time
void IntakeControl::Initialize() {
  intake->SetIntakeSpeed(0.0, 0.0);
}

// Called repeatedly when this Command is scheduled to run
void IntakeControl::Execute() {
  if (oi->GetMechJoystickButton9()) //Intake intake.
  {
    intake->SetIntakeSpeed(0.5, 0.5);
  }
  else if (oi->GetMechJoystickButton10()) //Outake intake.
  {
    intake->SetIntakeSpeed(-0.5, -0.5);
  }
  else
  {
    intake->SetIntakeSpeed(0.0, 0.0);
  }
  
}

// Make this return true when this Command no longer needs to run execute()
bool IntakeControl::IsFinished() { return false; }

// Called once after isFinished returns true
void IntakeControl::End() {
  intake->SetIntakeSpeed(0.0, 0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void IntakeControl::Interrupted() {}
