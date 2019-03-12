/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/DriveToXY.h"

DriveToXY::DriveToXY(double x, double y, double h) : CommandBase("DriveToXY"){
  //pass in 3 doubles, x and y (+x goes to the right, +y goes forward) 
  //and h (end heading, direction robot faces at end)
  driveX = x;
  driveY = y;
  driveH = h;
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  //Requires drivetrain
  Requires((frc::Subsystem*) drivetrain.get());
}

// Called just before this Command runs the first time
void DriveToXY::Initialize() {
  
}

// Called repeatedly when this Command is scheduled to run
void DriveToXY::Execute() {
  /* Can only turn between -90 and 90 degrees
    1. rotate so robot points at given point
      theta = arctan(x/y)
    2. drive to point
      distance = sqrt(x^2 + y^2)
    3. rotate to end heading
      angle = 90 + theta
    */
  driveTheta = atan(driveX/driveY);
  driveDistance = sqrt(driveX*driveX + driveY*driveY);
  driveAngle = 90 + driveTheta;
}

// Make this return true when this Command no longer needs to run execute()
bool DriveToXY::IsFinished() { 
  return false; 
}

// Called once after isFinished returns true
void DriveToXY::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveToXY::Interrupted() {}
