/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/commands/Subsystem.h>
#include <frc/WPILib.h>
#include <PinEnums.h>

using namespace frc;

class ClimberSystem : public Subsystem {
 private:
  // It's desirable that everything possible under private except
  // for methods that implement subsystem capabilities
  DoubleSolenoid * slamWheel;

 public:
  ClimberSystem(SolenoidPin climberForward, SolenoidPin climberReverse);
  void InitDefaultCommand() override;
  
  void SlamWheelUp();
  void SlamWheelDown();

  bool IsSlamWheelUp();
  bool IsSlamWheelDown();
};
