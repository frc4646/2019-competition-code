/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/AlignToTarget.h"

AlignToTarget::AlignToTarget() : CommandBase("AlignToTarget"){
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  // Requires PixyCamera Subsystem, Tank Drive Subsystem
  Requires((frc::Subsystem*) drivetrain.get());
  Requires((frc::Subsystem*) pixy.get());
  Requires((frc::Subsystem*) ultrasonic.get());
}

// Called just before this Command runs the first time
void AlignToTarget::Initialize() {
  drivetrain->SetDriveSpeed(0, 0);
  pixy->trackVisionTarget();
}

// Called repeatedly when this Command is scheduled to run
void AlignToTarget::Execute() {
  pixy->trackVisionTarget();
  
  float drivespeed;
  drivespeed = pixy->returnPanValue()/90.0;
  // turn
  if (abs(drivespeed) > 0.15)
  {
    drivetrain->SetDriveSpeed(-drivespeed,drivespeed);
  }
  //else if (pixy->returnWidthValue() < 100 && pixy->returnWidthValue() != 0)
  else if (ultrasonic->GetDistance() >= MinDist)
  {
    drivetrain->SetDriveSpeed(0.3,0.3);
  }
  else
  {
    drivetrain->SetDriveSpeed(0, 0);
  }
  
}

// Make this return true when this Command no longer needs to run execute()
bool AlignToTarget::IsFinished() { 
  return ultrasonic->GetDistance() <= MinDist; 
}

// Called once after isFinished returns true
void AlignToTarget::End() {
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AlignToTarget::Interrupted() {

}
