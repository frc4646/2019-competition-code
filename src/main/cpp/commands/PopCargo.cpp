/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/PopCargo.h"

PopCargo::PopCargo() : CommandBase("PopCargo") {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  //requires popper and grabber
  Requires((frc::Subsystem*) grab.get());
}

// Called just before this Command runs the first time
void PopCargo::Initialize() {
  //two solenoids; one controls popping out, the other popping in.
}

// Called repeatedly when this Command is scheduled to run
void PopCargo::Execute() {
  //open the grabber to X degrees and pop popper out, then bring popper back in.
  grab->OpenGrabber();
  grab->PopperOut();
}

// Make this return true when this Command no longer needs to run execute()
bool PopCargo::IsFinished() { 
  return grab->IsGrabberOpen() && grab->IsPopperOut();
}

// Called once after isFinished returns true
void PopCargo::End() {
  grab->PopperIn();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PopCargo::Interrupted() {
  End();
}
