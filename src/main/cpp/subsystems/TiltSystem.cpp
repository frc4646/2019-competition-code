/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/TiltSystem.h"

TiltSystem::TiltSystem() : Subsystem("TiltSystem") {
  armTilt = new DoubleSolenoid(0, 1);
}

void TiltSystem::InitDefaultCommand() {
  // Set the default command for a subsystem here.
}

double TiltSystem::getTolerance() {
  return tolerance;
}

double TiltSystem::getAngle() {
  return 0;
}

void TiltSystem::off() {
  armTilt->Set(DoubleSolenoid::Value::kOff);
}

void TiltSystem::Tilt(DoubleSolenoid::Value position) {
  armTilt->Set(position);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
