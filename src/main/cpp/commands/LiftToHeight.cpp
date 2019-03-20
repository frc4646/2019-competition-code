/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/LiftToHeight.h"
#include <iostream>

LiftToHeight::LiftToHeight(double distance) : CommandBase("LiftToHeight") {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  Requires((frc::Subsystem*) lift.get());
  // Requires the lift subsystem; distance is relative to the ground, in inches.
  dist=distance;
  printf("Constructor %f\n", dist);
}

// Called just before this Command runs the first time
void LiftToHeight::Initialize() {
  //Commanding lift subsystem on at a certain power
  printf("Initialize %f\n", dist);
  //put the below code in initialize so joystick movement will override the command (will still run IsFinished and End)
   if (lift->GetHeight() > dist){
    lift->LiftAtSpeed(-0.2);
    isLiftHigher = true;
  }
  else{
    lift->LiftAtSpeed(0.4);
    isLiftHigher = false;
  }
}

// Called repeatedly when this Command is scheduled to run
void LiftToHeight::Execute() {
  // Don't do anything here since we are using a constant power
  // If overshoot becomes an issue, maybe make a basic P loop here?
  printf("Execute");
}

// Make this return true when this Command no longer needs to run execute()
bool LiftToHeight::IsFinished() {
  // Ask the subsystem whether or not the lift has reached the correct height, then return the bool.
  printf("Is finished %f \n", lift->GetHeight());
  return ((dist + tolerance) >= lift->GetHeight() && 
          (dist - tolerance) <= lift->GetHeight());
}

// Called once after isFinished returns true
void LiftToHeight::End() {
  // Command lift subsystem to hold at that height
  lift->HoldHeight();
  printf("This is the end function %f\n", dist);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LiftToHeight::Interrupted() {
  End();
}
