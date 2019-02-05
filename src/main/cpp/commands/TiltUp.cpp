/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/TiltUp.h"

TiltUp::TiltUp() : CommandBase("TiltUp"){
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  Requires((frc::Subsystem*) tilt.get());

}

// Called just before this Command runs the first time
void TiltUp::Initialize() {
  tilt->Tilt(frc::DoubleSolenoid::Value::kForward);
}

// Called repeatedly when this Command is scheduled to run
void TiltUp::Execute() {}

// Make this return true when this Command no longer needs to run execute()
bool TiltUp::IsFinished() { 
  return false; 
}

// Called once after isFinished returns true
void TiltUp::End() {
  tilt->Tilt(frc::DoubleSolenoid::Value::kOff);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TiltUp::Interrupted() {
  End();
}
