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
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void GrabberSystem::OpenHatch(){
  //opens grabber to hold hatch
} 
void GrabberSystem::CloseHatch(){
  //closes grabber to release hatch
} 
void GrabberSystem::OpenCargo(){
  //opens grabber to release cargo
} 
void GrabberSystem::CloseCargo(){
  //closes grabber to hold cargo
} 