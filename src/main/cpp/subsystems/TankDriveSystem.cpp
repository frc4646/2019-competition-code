/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/TankDriveSystem.h"
#include <RobotMap.h>
#include <commands/TeleOpDrive.h>
#include <ctre/phoenix/motorcontrol/ControlMode.h>

using namespace frc;

TankDriveSystem::TankDriveSystem() : Subsystem("drivetrain") {
  frontLeft = new WPI_VictorSPX(0);
  frontRight = new WPI_TalonSRX(1);
  backLeft = new WPI_TalonSRX(2);
  backRight = new WPI_VictorSPX(3);
  
  backLeft->ConfigSelectedFeedbackSensor(FeedbackDevice::CTRE_MagEncoder_Relative, 0, 0);
  frontRight->ConfigSelectedFeedbackSensor(FeedbackDevice::CTRE_MagEncoder_Relative, 0, 0);

  frontRight->SetInverted(true);
  backRight->SetInverted(true);
  
  backLeft->Set(ControlMode::Position, 0);
  frontRight->Set(ControlMode::Position, 0);

  //configure the PID
  backLeft->Config_kP(0, 10, 0);
  frontRight->Config_kF(0, 5, 0);

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

  backLeft->Set(ControlMode::Position, 0.0);
  frontRight->Set(ControlMode::Position, 0.0);

}
void TankDriveSystem::TestEncoders(double num) {
  backLeft->Set(ControlMode::Position, num);
  frontRight->Set(ControlMode::Position, num);
}

void TankDriveSystem::Periodic() {
  frc::SmartDashboard::PutNumber("velocity_left", backLeft->GetSelectedSensorVelocity(0));
  frc::SmartDashboard::PutNumber("velocity_right", frontRight->GetSelectedSensorVelocity(0));
  frc::SmartDashboard::PutNumber("error_L", backLeft->GetClosedLoopError(0));
  frc::SmartDashboard::PutNumber("error_R", frontRight->GetClosedLoopError(0));
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
