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

  bool GetMechJoystickButton7(); //Nothing
  bool GetMechJoystickButton8(); //Nothing
  bool GetMechJoystickButton9(); //For storing intake
  bool GetMechJoystickButton10(); //For deploying intake
  bool GetMechJoystickButton11(); //For intake cylinder and grabber up.
  bool GetMechJoystickButton12(); //For intake cylinder and grabber down.
  bool GetLeftJoystickButton7(); //For following cargo
  //bool GetMechJoystickButton1();

private:
    Joystick leftJoystick;
    Joystick rightJoystick;
    Joystick mechJoystick;
    JoystickButton* intakeCargo;
    JoystickButton* outakeCargo;
    JoystickButton* SlamDown;
    JoystickButton* SlamUp;
    JoystickButton* FollowCargo;
    JoystickButton* Test;
};
