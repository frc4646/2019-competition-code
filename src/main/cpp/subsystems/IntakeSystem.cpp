/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/


/*
plugged in   
 	at frc::Command::Requires(frc::Subsystem*) 
 	at IntakeCargo::IntakeCargo() 
 	at OI::OI() 
 	at /home/lvuser/frcUserProgram() [0x2e720]  
  
*/
#include "subsystems/IntakeSystem.h"

using namespace frc;

IntakeSystem::IntakeSystem(MotorPin intakeMotorPin, SolenoidPin rightIntakeForward, 
    SolenoidPin rightIntakeReverse, SolenoidPin leftIntakeForward, SolenoidPin leftIntakeReverse) : Subsystem("IntakeSystem") {
  leftIntake = new Spark(intakeMotorPin);
  //rightIntake = new Spark(intakeMotorPin);

 // leftIntakeCylinder = new DoubleSolenoid(leftIntakeForward, leftIntakeReverse);
  //rightIntakeCylinder = new DoubleSolenoid(rightIntakeForward, rightIntakeReverse);

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
  if (leftIntakeCylinder->Get() == DoubleSolenoid::Value::kForward && 
          rightIntakeCylinder->Get() == DoubleSolenoid::Value::kForward)
  {
    return true;
  }
  else
  {
    return false;
  }
}
bool IntakeSystem::IsIntakeDeployed(){
  if (leftIntakeCylinder->Get() == DoubleSolenoid::Value::kReverse && 
          rightIntakeCylinder->Get() == DoubleSolenoid::Value::kReverse)
  {
    return true;
  }
  else
  {
    return false;
  }
}