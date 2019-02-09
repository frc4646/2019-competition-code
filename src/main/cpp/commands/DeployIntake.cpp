/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/DeployIntake.h"

DeployIntake::DeployIntake() : CommandBase("DeployIntake") {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  // Requires Intake subsystem 
  Requires((frc::Subsystem*) intake.get());
}

// Called just before this Command runs the first time
void DeployIntake::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void DeployIntake::Execute() {
  // Put intake outside of chassis when cargo is wanted
  intake->CylinderPositionDown();
}

// Make this return true when this Command no longer needs to run execute()
bool DeployIntake::IsFinished() { 
  return intake->IsIntakeDeployed(); 
}

// Called once after isFinished returns true
void DeployIntake::End() {
  intake->CylinderPositionOff();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DeployIntake::Interrupted() {
  End();
}
