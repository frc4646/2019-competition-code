/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/NEWIntakeSystem.h"

NEWIntakeSystem::NEWIntakeSystem(MotorPin intakeMotorPin, MotorPin intakeSlidePin) : Subsystem("NEWIntakeSystem") {
  sliderMotor = new Spark(intakeSlidePin);
  intakeMotor = new Spark(intakeMotorPin);
  SmartDashboard::PutNumber("IntakeVelocity", intakeVelocity);
  SmartDashboard::PutNumber("OutakeVelocity", outakeVelocity);
  SmartDashboard::PutNumber("SlideInVelocity", slideInVelocity);
  SmartDashboard::PutNumber("SlideOutVelocity", slideOutVelocity);
}

void NEWIntakeSystem::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
}

void NEWIntakeSystem::RunIntake() {
  intakeMotor->SetSpeed(SmartDashboard::GetNumber("IntakeVelocity", intakeVelocity));
}

void NEWIntakeSystem::RunOutake() {
  intakeMotor->SetSpeed(SmartDashboard::GetNumber("OutakeVelocity", outakeVelocity));
}

void NEWIntakeSystem::StopIntake() {
  intakeMotor->SetSpeed(0);
}

void NEWIntakeSystem::SlideIn() {
  sliderMotor->SetSpeed(SmartDashboard::GetNumber("SlideInVelocity", slideInVelocity));
}

void NEWIntakeSystem::SlideOut() {
  sliderMotor->SetSpeed(SmartDashboard::GetNumber("SlideOutVelocity", slideOutVelocity));
}

void NEWIntakeSystem::StopSlide() {
  sliderMotor->SetSpeed(0);
}
