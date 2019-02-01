/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/DriveForTime.h"

DriveForTime::DriveForTime(double seconds, double speed) : CommandBase("DriveForTime") {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  Requires((frc::Subsystem*) drivetrain.get());
  // Speed is -1 to +1
  double sec = seconds;
  double sped = speed;
}

// Called just before this Command runs the first time
void DriveForTime::Initialize() {
  drivetrain->SetDriveSpeed(sped, sped);
  SetTimeout(sec);
}

// Called repeatedly when this Command is scheduled to run
void DriveForTime::Execute() {
  // Don't do anything here since this command simply runs once.
}

// Make this return true when this Command no longer needs to run execute()
bool DriveForTime::IsFinished() {
  // Wait for a certain amount of time while returning false and then return true
  return IsTimedOut();
}

// Called once after isFinished returns true
void DriveForTime::End() {
  // Send motor stop command.
  drivetrain->SetDriveSpeed(0, 0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveForTime::Interrupted() {}
