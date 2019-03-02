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

class GrabberSystem : public Subsystem {
 private:
  // It's desirable that everything possible under private except
  // for methods that implement subsystem
  //linear actuator
  DoubleSolenoid * grabber;
  DoubleSolenoid * popper;

 public:
  GrabberSystem(SolenoidPin grabberForward, SolenoidPin grabberReverse, SolenoidPin2 popperForward, SolenoidPin2 popperReverse);
  void InitDefaultCommand() override;
  void OpenGrabber(); //opens grabber to hold hatch
  void CloseGrabber(); //closes grabber to release hatch
  void PopperOut(); //Pop Cargo
  void PopperIn(); //Cargo goes back in

  bool IsGrabberOpen();
  bool IsGrabberClosed();
  bool IsPopperOut();
  bool IsPopperIn();
};
