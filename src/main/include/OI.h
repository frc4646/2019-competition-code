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

  bool GetMechJoystickButton9(); //For intake
  bool GetMechJoystickButton10(); //For outake
  double GetMechJoystickThrottle(); //Not being used (for now)

private:
    Joystick leftJoystick;
    Joystick rightJoystick;
    Joystick mechJoystick;
};
