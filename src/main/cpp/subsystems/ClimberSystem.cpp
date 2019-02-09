/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/ClimberSystem.h"

ClimberSystem::ClimberSystem() : Subsystem("ClimberSystem") {}

void ClimberSystem::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
  slamWheel = new DoubleSolenoid(0, 1);
}
void ClimberSystem::SlamWheelUp() {
  slamWheel->Set(frc::DoubleSolenoid::Value::kReverse);
}
void ClimberSystem::SlamWheelDown() { 
  slamWheel->Set(frc::DoubleSolenoid::Value::kForward);
}

bool ClimberSystem::IsSlamWheelUp() {
  if (slamWheel->Get() == DoubleSolenoid::Value::kReverse)
  {
    return true;
  }
  else
  {
    return false;   
  }
}

bool ClimberSystem::IsSlamWheelDown() {
  if (slamWheel->Get() == DoubleSolenoid::Value::kForward)
  {
    return true;
  }
  else
  {
    return false;   
  }
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
