/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#ifndef DriveTrain_H
#define DriveTrain_H

#include <frc/commands/Subsystem.h>
#include <frc/WPILib.h>
#include <ctre/Phoenix.h>

using namespace frc;

class TankDriveSystem : public frc::Subsystem {
 private:
  // It's desirable that everything possible under private except
  // for methods that implement subsystem capabilities
  WPI_TalonSRX * frontLeft;
  WPI_TalonSRX * frontRight;
  WPI_VictorSPX * backLeft;
  WPI_VictorSPX * backRight;

 public:
  TankDriveSystem();
  void InitDefaultCommand() override;
  void SetDriveSpeed(double leftSpeed, double rightSpeed);
};

#endif