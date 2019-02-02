/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/TiltControl.h"

TiltControl::TiltControl() {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
    Requires((frc::Subsystem*) tilt.get());

}

// Called just before this Command runs the first time
void TiltControl::Initialize() {
  tilt->Tilt(frc::DoubleSolenoid::Value::kOff);
}

// Called repeatedly when this Command is scheduled to run
void TiltControl::Execute() {
  if(oi->GetMechJoystickButton7())
  {
    tilt->Tilt(frc::DoubleSolenoid::Value::kForward);
  } 
  else if (oi->GetMechJoystickButton8())
  {
    tilt->Tilt(frc::DoubleSolenoid::Value::kReverse);
  }
}

// Make this return true when this Command no longer needs to run execute()
bool TiltControl::IsFinished() { return false; }

// Called once after isFinished returns true
void TiltControl::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TiltControl::Interrupted() {}
