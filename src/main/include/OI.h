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

  bool GetMechJoystickButton7(); //For Lift up
  bool GetMechJoystickButton8(); //For Lift down
  bool GetMechJoystickButton9(); //For intake intake
  bool GetMechJoystickButton10(); //For outake intake
  bool GetMechJoystickButton11(); //For intake cylinder and grabber up.
  bool GetMechJoystickButton12(); //For intake cylinder and grabber down.
  double GetMechJoystickThrottle(); //For the lift.
  bool GetMechJoystickButton1(); //For the lift.

private:
    Joystick leftJoystick;
    Joystick rightJoystick;
    Joystick mechJoystick;
    JoystickButton* upTilt;
    JoystickButton* downTilt;
    JoystickButton* intakeCargo;
    JoystickButton* outakeCargo;
    JoystickButton* SlamDown;
    JoystickButton* SlamUp;
};
