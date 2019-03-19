/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/NEWOutakeCargo.h"

NEWOutakeCargo::NEWOutakeCargo() {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  Requires((frc::Subsystem*) intake.get()); 
}

// Called just before this Command runs the first time
void NEWOutakeCargo::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void NEWOutakeCargo::Execute() {
  intake->RunOutake();
}

// Make this return true when this Command no longer needs to run execute()
bool NEWOutakeCargo::IsFinished() { return true; }

// Called once after isFinished returns true
void NEWOutakeCargo::End() {
  intake->StopIntake();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void NEWOutakeCargo::Interrupted() {
  End();
}
