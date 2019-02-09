/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/IntakeSystem.h"

using namespace frc;

IntakeSystem::IntakeSystem() : Subsystem("IntakeSystem") {
  leftIntake = new Spark(0);
  rightIntake = new Spark(1);

  leftIntakeCylinder = new DoubleSolenoid(6, 7);
  rightIntakeCylinder = new DoubleSolenoid(8, 9);

  rightIntake->SetInverted(true);
} //Example port numbers

void IntakeSystem::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void IntakeSystem::SetIntakeSpeed(double leftSpeed, double rightSpeed) {
  leftIntake->Set(leftSpeed);
  rightIntake->Set(rightSpeed);
}

void IntakeSystem::CylinderPositionUp(){
  leftIntakeCylinder->Set(DoubleSolenoid::Value::kForward);
  rightIntakeCylinder->Set(DoubleSolenoid::Value::kForward);
}
void IntakeSystem::CylinderPositionDown(){
  leftIntakeCylinder->Set(DoubleSolenoid::Value::kReverse);
  rightIntakeCylinder->Set(DoubleSolenoid::Value::kReverse);
}
void IntakeSystem::CylinderPositionOff(){
  leftIntakeCylinder->Set(DoubleSolenoid::Value::kOff);
  rightIntakeCylinder->Set(DoubleSolenoid::Value::kOff);
}
bool IntakeSystem::IsIntakeStored(){
  return (leftIntakeCylinder->Get() == DoubleSolenoid::Value::kForward && 
          rightIntakeCylinder->Get() == DoubleSolenoid::Value::kForward);
}
bool IntakeSystem::IsIntakeDeployed(){
  return (leftIntakeCylinder->Get() == DoubleSolenoid::Value::kReverse&& 
          rightIntakeCylinder->Get() == DoubleSolenoid::Value::kReverse);
}