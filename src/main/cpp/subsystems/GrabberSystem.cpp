/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/GrabberSystem.h"

GrabberSystem::GrabberSystem() : Subsystem("GrabberSystem") {}

void GrabberSystem::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
  grabber = new Servo(0);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void GrabberSystem::OpenHatch(){
  //opens grabber to hold hatch
  grabber->Set(0.9);
} 
void GrabberSystem::CloseHatch(){
  grabber->Set(0.2);
} 
void GrabberSystem::OpenCargo(){
  grabber->Set(0.9);
} 
void GrabberSystem::CloseCargo(){
  grabber->Set(0.2);
} 

void GrabberSystem::SetPosition(double position){ //For tele-op
  grabber->Set(position);
}