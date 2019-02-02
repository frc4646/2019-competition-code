/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/TankDriveSystem.h"
#include <RobotMap.h>
#include <commands/TeleOp/TeleOpDrive.h>

using namespace frc;

TankDriveSystem::TankDriveSystem() : Subsystem("drivetrain") {
  frontLeft = new WPI_TalonSRX(0);
  frontRight = new WPI_TalonSRX(1);
  backLeft = new WPI_VictorSPX(2);
  backRight = new WPI_VictorSPX(3);
  
  frontRight->SetInverted(true);
  backRight->SetInverted(true);
}

void TankDriveSystem::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
  SetDefaultCommand(new TeleopDrive());
}
void TankDriveSystem::SetDriveSpeed(double leftSpeed, double rightSpeed){
  frontLeft->Set(leftSpeed);
  frontRight->Set(rightSpeed);
  backLeft->Set(leftSpeed);
  backRight->Set(rightSpeed);

}

// Put methods for controlling this subsystem
// here. Call these from Commands.
