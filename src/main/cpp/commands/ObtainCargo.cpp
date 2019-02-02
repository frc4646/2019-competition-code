/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/ObtainCargo.h"
#include "subsystems/GrabberSystem.h"
#include "subsystems/TiltSystem.h"

ObtainCargo::ObtainCargo() : CommandBase("ObtainCargo") {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  Requires((frc::Subsystem*) grab.get());
  Requires((frc::Subsystem*) tilt.get());
  //requires grabber and tilt subsystem
  //assume grabber is open and tilted down.
}

// Called just before this Command runs the first time
void ObtainCargo::Initialize() {
  //close grabber and tilt up.
  grab->CloseCargo();
  tilt->Tilt(0);
  }

// Called repeatedly when this Command is scheduled to run
void ObtainCargo::Execute() {}

// Make this return true when this Command no longer needs to run execute()
bool ObtainCargo::IsFinished() { 
  //finished once grabber is tilted back up.
  return false; 
}

// Called once after isFinished returns true
void ObtainCargo::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ObtainCargo::Interrupted() {}
