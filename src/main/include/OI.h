/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/WPILib.h>

using namespace frc;
using namespace wpi;

class OI {
public:
  OI();
  double GetLeftJoystickY();
  double GetRightJoystickY();
  double GetMechJoystickY(); //For the lift

  bool GetMechJoystickButton3(); //close grabber
  bool GetMechJoystickButton5(); //open grabber NO popper
  bool GetMechJoystickButton9(); //outtake cargo
  bool GetMechJoystickButton8(); //test drive encoders
  bool GetMechJoystickButton10(); //deploy intake
  bool GetMechJoystickButton11(); //intake cargo
  bool GetMechJoystickButton12(); //store intake
  //bool GetMechJoystickButton6(); //open grabber AND popper

  bool GetRightJoystickButton6(); //slam wheel up
  bool GetRightJoystickButton7(); //slam wheel down
  bool GetRightJoystickButton5(); //For following cargo

private:
  Joystick leftJoystick;
  Joystick rightJoystick;
  Joystick mechJoystick;

  JoystickButton* intakeCargo;
  JoystickButton* outakeCargo;
  JoystickButton* IntakeDeploy;
  JoystickButton* IntakeStore;
  JoystickButton* GrabberOpen;
  JoystickButton* GrabberClose;
  JoystickButton* SlamUp;
  JoystickButton* SlamDown;
  JoystickButton* LiftLevel1;
  JoystickButton* LiftLevel2;
  JoystickButton* LiftLevel3;

  JoystickButton* FollowCargo;
  JoystickButton* Test;
};
