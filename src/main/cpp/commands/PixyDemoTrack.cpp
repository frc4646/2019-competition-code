/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/PixyDemoTrack.h"

PixyDemoTrack::PixyDemoTrack() : CommandBase("PixyDemoTrack") {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  Requires((frc::Subsystem*) pixy.get());
  Requires((frc::Subsystem*) drivetrain.get());
  run = 0;
}

// Called just before this Command runs the first time
void PixyDemoTrack::Initialize() {
  pixy->trackOrangeBall();
}

// Called repeatedly when this Command is scheduled to run
void PixyDemoTrack::Execute() {
  /*
 if(run%2 ==0)
 {
  pixy->trackOrangeBall();
 }

run++;
*/
  pixy->trackOrangeBall();

  /*if (pixy->returnPanValue() <= -5)
  {
    drivetrain->SetDriveSpeed(0.3, -0.3);
  }
  else if (pixy->returnPanValue() >= 5)
  {
    drivetrain->SetDriveSpeed(-0.3, 0.3);
  }
  else
  {
    drivetrain->SetDriveSpeed(0, 0);
  }*/
  float drivesped;
  drivesped = pixy->returnPanValue()/90.0;
  if (abs(drivesped) > 0.15)
  {
    drivetrain->SetDriveSpeed(-drivesped,drivesped);
  }
  else if (pixy->returnWidthValue() < 100 && pixy->returnWidthValue() != 0)
  {
    drivetrain->SetDriveSpeed(0.3,0.3);
  }
  else
  {
    drivetrain->SetDriveSpeed(0, 0);
  }
  if (pixy->returnWidthValue() % 10 == 0)
  {
    printf("Width: %d\n", pixy->returnWidthValue()); //Usually returns 20-90
    printf("Height: %d\n", pixy->returnHeightValue());
  }
}

// Make this return true when this Command no longer needs to run execute()
bool PixyDemoTrack::IsFinished() { return false; }

// Called once after isFinished returns true
void PixyDemoTrack::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PixyDemoTrack::Interrupted() {}
