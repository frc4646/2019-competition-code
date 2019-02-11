/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/LiftSystem.h"
#include <commands/LiftControl.h>

LiftSystem::LiftSystem(MotorPin liftMotorPin, AnalogPin stringPotPin) : Subsystem("LiftSystem") {
  liftMotor = new Spark(liftMotorPin);
  LiftStringPotPin = new AnalogInput(stringPotPin);
}

void LiftSystem::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
  SetDefaultCommand(new LiftControl());
}

void LiftSystem::LiftAtSpeed(double speed){
  liftMotor->Set(speed);
}

double LiftSystem::GetHeight(){
  pinVoltage = LiftStringPotPin->GetVoltage(); //the current voltage from the string pot
  
  //this below converts volts into inches
  m = (MinHeight - MaxHeight) / (double)(MinValue - MaxValue);
	b = MinHeight - ((MinValue)*(m));

	height = ((m)*(pinVoltage)) + b;

  return height;
}

void LiftSystem::HoldHeight(){
  liftMotor->Set(HoldPower);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
