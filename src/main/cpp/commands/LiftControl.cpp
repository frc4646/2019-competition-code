/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/LiftControl.h"

LiftControl::LiftControl() : CommandBase("LiftControl") {
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
  frc::SmartDashboard::PutNumber("Lift height in inches", lift->GetHeight());
  if (oi->GetMechJoystickY() > minValue) //if the joystick value is greater than the positive min
  {
    slope = (lift->MaxPower - lift->HoldPower)/(1.0 - minValue);
    power = slope * (oi->GetMechJoystickY() - 1.0) + lift->MaxPower;
  }
  else if (oi->GetMechJoystickY() < -minValue) //if the joystick value is less than the negative min
  {
    slope = (lift->MinPower - lift->HoldPower)/(minValue - 1.0);
    power = slope * (oi->GetMechJoystickY() + 1.0) + lift->MinPower;
  }
  else
  {
    power = lift->HoldPower;
  }
  lift->LiftAtSpeed(power);
}

// Make this return true when this Command no longer needs to run execute()
bool LiftControl::IsFinished() { return false; }

// Called once after isFinished returns true
void LiftControl::End() {
  lift->HoldHeight();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LiftControl::Interrupted() {
  End();
}
