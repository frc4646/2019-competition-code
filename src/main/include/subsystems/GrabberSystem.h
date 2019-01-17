/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/commands/Subsystem.h>
#include <frc/Spark.h>
#include "CommandBase.h"

class GrabberSystem : public frc::Subsystem {
 private:
  // It's desirable that everything possible under private except
  // for methods that implement subsystem 
  //frc::Spark tiltMotor;
  //linear actuator

 public:
  GrabberSystem();
  void InitDefaultCommand() override;
  void OpenHatch(); //opens grabber to hold hatch
  void CloseHatch(); //closes grabber to release hatch
  void OpenCargo(); //opens grabber to release cargo
  void CloseCargo(); //opens grabber to hold cargo
  void TiltDown();
  void TiltUp();
};
