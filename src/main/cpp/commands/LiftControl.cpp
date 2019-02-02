/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/LiftControl.h"

LiftControl::LiftControl() {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  Requires((frc::Subsystem*) lift.get());
}

// Called just before this Command runs the first time
void LiftControl::Initialize() {
  lift->HoldHeight();
}

// Called repeatedly when this Command is scheduled to run
void LiftControl::Execute() {
  if (oi->GetMechJoystickButton1())
  {
    lift->LiftAtSpeed(oi->GetMechJoystickThrottle());
  }
  else
  {
    lift->HoldHeight();
  }
}

// Make this return true when this Command no longer needs to run execute()
bool LiftControl::IsFinished() { return false; }

// Called once after isFinished returns true
void LiftControl::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LiftControl::Interrupted() {}
