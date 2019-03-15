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
#include <PinEnums.h>

using namespace frc;

class TankDriveSystem : public Subsystem {
 private:
  // It's desirable that everything possible under private except
  // for methods that implement subsystem capabilities
  WPI_VictorSPX * frontLeft;
  WPI_TalonSRX * frontRight;
  WPI_TalonSRX * backLeft;
  WPI_VictorSPX * backRight;
  double rampRate = 0.05; //value recommended by Fargo Dave

 public:
  TankDriveSystem();
  void InitDefaultCommand() override;
  void SetDriveSpeed(double leftSpeed, double rightSpeed);
  void TestEncoders(double num);
  void Periodic() override;
};

#endif