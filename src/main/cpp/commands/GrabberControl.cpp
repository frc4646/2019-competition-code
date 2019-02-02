/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/GrabberControl.h"

GrabberControl::GrabberControl() : CommandBase("GrabController") {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  Requires((frc::Subsystem*) grab.get());
}

// Called just before this Command runs the first time
void GrabberControl::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void GrabberControl::Execute() {
  if (oi->GetMechJoystickButton11()) //Up
  {
    Wait(0.25); //Waits for intake.
    grab->SetPosition(0.9);
  }
  if (oi->GetMechJoystickButton12()) //Down
  {
    grab->SetPosition(0.2);
  }
}

// Make this return true when this Command no longer needs to run execute()
bool GrabberControl::IsFinished() { return false; }

// Called once after isFinished returns true
void GrabberControl::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void GrabberControl::Interrupted() {}
