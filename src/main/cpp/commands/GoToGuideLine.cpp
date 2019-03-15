/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/GoToGuideLine.h"

GoToGuideLine::GoToGuideLine() : CommandBase("GoToGuideLine"){
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  //requires drivetrain and perception systems
  /* meant for not-extreme cases (don't use to go to a guide line 
  half way across the field)*/
  //the same as DriveToXY except x,y, and heading are determined by guide line
}

// Called just before this Command runs the first time
void GoToGuideLine::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void GoToGuideLine::Execute() {
  /*Can only turn between -90 and 90 degrees
    1. use pixy2 to find closest point on the guide line. Set as (x,y).
    2. use pixy2 to find angle between guide line and x axis. Set as beta.
    3. rotate so robot points at given point
      theta = arctan(x/y)
    4. drive to point
      distance = sqrt(x^2 + y^2)
    5. rotate to end heading
      alpha = 90 + theta - beta
  */
}

// Make this return true when this Command no longer needs to run execute()
bool GoToGuideLine::IsFinished() { 
  return false; 
}

// Called once after isFinished returns true
void GoToGuideLine::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void GoToGuideLine::Interrupted() {}
