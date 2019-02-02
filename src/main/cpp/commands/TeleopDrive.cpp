/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/TeleopDrive.h"

TeleopDrive::TeleopDrive() : CommandBase("TeleopDrive") {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());

  // Requires the drivetrain subsystem.
  Requires((frc::Subsystem*) drivetrain.get());
}

// Called just before this Command runs the first time
void TeleopDrive::Initialize() {
  // Send motor stop command.
  drivetrain->SetDriveSpeed(0.0, 0.0);
}

// Called repeatedly when this Command is scheduled to run
void TeleopDrive::Execute() {
  // Set left drive to left joystick.
  // Set right drive to right joystick.
  drivetrain->SetDriveSpeed(oi->GetLeftJoystickY(), oi->GetRightJoystickY());
}

// Make this return true when this Command no longer needs to run execute()
bool TeleopDrive::IsFinished() { return false; }

// Called once after isFinished returns true
void TeleopDrive::End() {
  drivetrain->SetDriveSpeed(0.0, 0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TeleopDrive::Interrupted() {}
