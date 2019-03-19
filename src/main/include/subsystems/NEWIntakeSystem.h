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

class NEWIntakeSystem : public frc::Subsystem {
 private:
  // It's desirable that everything possible under private except
  // for methods that implement subsystem capabilities
  Spark * intakeMotor;
  Spark * sliderMotor;
  double intakeVelocity = 0.5;
  double outakeVelocity = -0.5;
  double slideInVelocity = -0.5;
  double slideOutVelocity = 0.5;
 public:
  NEWIntakeSystem(MotorPin intakeMotorPin, MotorPin intakeSlidePin);
  void InitDefaultCommand() override;
  void RunIntake();
  void RunOutake();
  void StopIntake();
  void SlideIn();
  void SlideOut();
  void StopSlide();
};
