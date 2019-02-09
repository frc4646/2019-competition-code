/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/GoToWallAtDistance.h"

GoToWallAtDistance::GoToWallAtDistance() : CommandBase("GoToWallAtDistance") {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  //Requires Tank Drive Subsystem and Perception Subsystem
}

// Called just before this Command runs the first time
void GoToWallAtDistance::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void GoToWallAtDistance::Execute() {
  //double stopDistancePerceptedInches = 12.0;
  //If wall is greater then stopDistancePerceptedInches away continuously drive using drive train, 
  //else override and stop drivetrain motors.
}

// Make this return true when this Command no longer needs to run execute()
bool GoToWallAtDistance::IsFinished() { 
  //Stop Driving.
  return false; 
}

// Called once after isFinished returns true
void GoToWallAtDistance::End() {
  //Stop Driving.
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void GoToWallAtDistance::Interrupted() {}
