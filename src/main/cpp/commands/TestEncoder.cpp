/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/TestEncoder.h"
#include <subsystems/TankDriveSystem.h>

TestEncoder::TestEncoder() {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  Requires((frc::Subsystem*) drivetrain.get());
}

// Called just before this Command runs the first time
void TestEncoder::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void TestEncoder::Execute() {
  drivetrain->TestEncoders(frc::Preferences::GetInstance()->GetDouble("encoderVal", 0.0));
}

// Make this return true when this Command no longer needs to run execute()
bool TestEncoder::IsFinished() { return false; }

// Called once after isFinished returns true
void TestEncoder::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TestEncoder::Interrupted() {}
