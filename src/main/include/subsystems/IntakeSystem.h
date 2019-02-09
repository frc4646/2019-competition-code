/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/commands/Subsystem.h>
#include <frc/WPILib.h>

using namespace frc;

class IntakeSystem : public Subsystem {
 private:
  // It's desirable that everything possible under private except
  // for methods that implement subsystem capabilities
  Spark * leftIntake;
  Spark * rightIntake;
  DoubleSolenoid * leftIntakeCylinder;
  DoubleSolenoid * rightIntakeCylinder;

 public:
  IntakeSystem();
  void InitDefaultCommand() override;
  void SetIntakeSpeed(double leftSpeed, double rightSpeed);
  void CylinderPositionUp();
  void CylinderPositionDown();
  void CylinderPositionOff();
};
