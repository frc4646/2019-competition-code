/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/Autonomous/LiftToHeight.h"

LiftToHeight::LiftToHeight(double distance) : CommandBase("LiftToHeight") {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  Requires((frc::Subsystem*) lift.get());
  // Requires the lift subsystem; distance is relative to the ground, in inches.
  dist=distance;
  
}

// Called just before this Command runs the first time
void LiftToHeight::Initialize() {
  //Commanding lift subsystem on at a certain power
  
  if (lift->GetHeight()>dist){
    lift->LiftAtSpeed(-0.2);
    bool isLiftHigher = true;
  }
  else{
    lift->LiftAtSpeed(0.5);
    bool isLiftHigher = false;
  }
  

}

// Called repeatedly when this Command is scheduled to run
void LiftToHeight::Execute() {
  // Don't do anything here since we are using a constant power
  // If overshoot becomes an issue, maybe make a basic P loop here?

}

// Make this return true when this Command no longer needs to run execute()
bool LiftToHeight::IsFinished() {
  // Ask the subsystem whether or not the lift has reached the correct height, then return the bool.
  
  if (isLiftHigher){
    return lift->GetHeight()<=dist;
  }
  else{
    return lift->GetHeight()>=dist;
  }
  
}

// Called once after isFinished returns true
void LiftToHeight::End() {
  // Command lift subsystem to hold at that height
  lift->HoldHeight();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LiftToHeight::Interrupted() {}
