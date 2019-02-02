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

class TiltSystem : public Subsystem {
 private:
  // It's desirable that everything possible under private except
  // for methods that implement subsystem capabilities
  double tolerance = 0;

 public:
  TiltSystem();
  double getTolerance();
  double getAngle();
  void Tilt(double direction); //tilt grabber in given direction
  void off(); //stops tilting
  void InitDefaultCommand() override;
};
