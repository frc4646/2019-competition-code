/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/
//Test
#include "OI.h"

#include <frc/WPILib.h>
#include <commands/NEWIntakeCargo.h>
#include <commands/NEWOutakeCargo.h>
#include <commands/IntakeSlideIn.h>
#include <commands/IntakeSlideOut.h>
#include <commands/PopCargo.h>
#include <commands/ObtainCargo.h>
#include <commands/DeployClimb.h>
#include <commands/StoreClimb.h>
#include <commands/PixyDemoTrack.h>
#include <commands/TestEncoder.h>
#include <commands/LiftToHeight.h>
#include <commands/AlignToTarget.h>
#include <RobotMap.h>

using namespace frc;
using namespace wpi;

OI::OI() :
  // Process operator interface input here.
  leftJoystick(0),
  rightJoystick(1),
  mechJoystick(2)
{
  intakeCargo = new JoystickButton(&mechJoystick, 11);
  outakeCargo = new JoystickButton(&mechJoystick, 9);
  SlideIn = new JoystickButton(&mechJoystick, 4);
  SlideOut = new JoystickButton(&mechJoystick, 6);
  GrabberOpen = new JoystickButton(&mechJoystick, 5);
  GrabberClose = new JoystickButton(&mechJoystick, 3);
  LiftLevel1 = new JoystickButton(&mechJoystick, 12);
  LiftLevel2 = new JoystickButton(&mechJoystick, 10);
  LiftLevel3 = new JoystickButton(&mechJoystick, 8);
  SlamDown = new JoystickButton(&rightJoystick, 7);
  SlamUp = new JoystickButton(&rightJoystick, 6);
  //FollowCargo = new JoystickButton(&rightJoystick, 5);
  //Test = new JoystickButton(&leftJoystick, 6);

  intakeCargo->WhenPressed(new NEWIntakeCargo());
  outakeCargo->WhenPressed(new NEWOutakeCargo());
  SlideIn->WhenPressed(new IntakeSlideIn());
  SlideOut->WhenPressed(new IntakeSlideOut());
  GrabberOpen->WhenPressed(new PopCargo());
  GrabberClose->WhenPressed(new ObtainCargo());
  LiftLevel1->WhenPressed(new LiftToHeight(liftLevel1));
  LiftLevel2->WhenPressed(new LiftToHeight(liftLevel2));
  LiftLevel3->WhenPressed(new LiftToHeight(liftLevel3));
  SlamUp->WhenPressed(new StoreClimb());
  SlamDown->WhenPressed(new DeployClimb());
  //FollowCargo->WhenPressed(new PixyDemoTrack());
  //Test->WhenPressed(new AlignToTarget());
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
  return -mechJoystick.GetRawAxis(1);
}

// driver one buttons
bool OI::GetRightJoystickButton5()
{
  return rightJoystick.GetRawButtonPressed(5);
}

bool OI::GetRightJoystickButton6()
{
  return rightJoystick.GetRawButtonPressed(6);
}

bool OI::GetRightJoystickButton7()
{
  return rightJoystick.GetRawButtonPressed(7);
}

// driver two buttons
bool OI::GetMechJoystickButton3()
{
  return mechJoystick.GetRawButtonPressed(3);
}

bool OI::GetMechJoystickButton5()
{
  return mechJoystick.GetRawButtonPressed(5);
}

bool OI::GetMechJoystickButton8()
{
  return mechJoystick.GetRawButtonPressed(8);
}

bool OI::GetMechJoystickButton9()
{
  return mechJoystick.GetRawButtonPressed(9);
}

bool OI::GetMechJoystickButton10()
{
  return mechJoystick.GetRawButtonPressed(10);
}

bool OI::GetMechJoystickButton11()
{
  return mechJoystick.GetRawButtonPressed(11);
}

bool OI::GetMechJoystickButton12()
{
  return mechJoystick.GetRawButtonPressed(12);
}
