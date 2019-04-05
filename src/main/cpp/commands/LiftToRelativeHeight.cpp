/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/LiftToRelativeHeight.h"

LiftToRelativeHeight::LiftToRelativeHeight(double relativeDistance) : CommandBase("LiftToRelativeHeight") {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  Requires((frc::Subsystem*) lift.get());
  // Requires the lift subsystem; distance is relative to current height, in inches.
  dist=lift->GetHeight()+relativeDistance;
  printf("Constructor LifttoRelativeHeight %f\n", dist);
}

// Called just before this Command runs the first time
void LiftToRelativeHeight::Initialize() {
  lift->SetLiftToHeight(true);
  //Commanding lift subsystem on at a certain power
  //put the below code in initialize so joystick movement will override the command (will still run IsFinished and End)
  if (lift->GetHeight() > dist){
    lift->LiftAtSpeed(-0.3);
    isLiftHigher = true;
  }
  else{
    lift->LiftAtSpeed(0.5);
    isLiftHigher = false;
  }
}

// Called repeatedly when this Command is scheduled to run
void LiftToRelativeHeight::Execute() {
  
}

// Make this return true when this Command no longer needs to run execute()
bool LiftToRelativeHeight::IsFinished() {
  // Ask the subsystem whether or not the lift has reached the correct height, then return the bool.
  return ((dist + tolerance) >= lift->GetHeight() && 
          (dist - tolerance) <= lift->GetHeight());
 }

// Called once after isFinished returns true
void LiftToRelativeHeight::End() {
  // Command lift subsystem to hold at that height
  lift->HoldHeight();
  lift->SetLiftToHeight(false);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LiftToRelativeHeight::Interrupted() {
  End();
}
