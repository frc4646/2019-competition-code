/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"

#include <frc/WPILib.h>
#include <commands/IntakeCargo.h>
#include <commands/OutakeCargo.h>
#include <commands/StoreIntake.h>
#include <commands/DeployIntake.h>
#include <commands/DeployClimb.h>
#include <commands/StoreClimb.h>

using namespace frc;
using namespace wpi;

OI::OI() :
  // Process operator interface input here.
  leftJoystick(0),
  rightJoystick(1),
  mechJoystick(2)
{
  intakeCargo = new JoystickButton(&mechJoystick, 9);
  outakeCargo = new JoystickButton(&mechJoystick, 10);
  SlamDown = new JoystickButton(&mechJoystick, 11);
  SlamUp = new JoystickButton(&mechJoystick, 12);

  intakeCargo->WhenPressed(new IntakeCargo());
  outakeCargo->WhenPressed(new OutakeCargo());
  SlamUp->WhenPressed(new StoreClimb());
  SlamDown->WhenPressed(new DeployClimb());
}

double OI::GetLeftJoystickY()
{
  return leftJoystick.GetRawAxis(1);
}

double OI::GetRightJoystickY()
{
  return rightJoystick.GetRawAxis(1);
}

double OI::GetMechJoystickY()
{
  return mechJoystick.GetRawAxis(1);
}

//The methods below are for reference, may not be used.

bool OI::GetMechJoystickButton7() //Nothing
{
  return mechJoystick.GetRawButtonPressed(7);
}

bool OI::GetMechJoystickButton8() //Nothing
{
  return mechJoystick.GetRawButtonPressed(8);
}

bool OI::GetMechJoystickButton9() //For storing intake
{
  return mechJoystick.GetRawButtonPressed(9);
}

bool OI::GetMechJoystickButton10() //For deploying intake
{
  return mechJoystick.GetRawButtonPressed(10);
}

bool OI::GetMechJoystickButton11() //For intake cylinder and grabber up.
{
  return mechJoystick.GetRawButtonPressed(11);
}

bool OI::GetMechJoystickButton12() //For intake cylinder and grabber down.
{
  return mechJoystick.GetRawButtonPressed(12);
}
