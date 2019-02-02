/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#ifndef DriveCommandTeleop_H
#define DriveCommandTeleop_H

#include <CommandBase.h>
#include <frc/WPILib.h>

using namespace frc;
using namespace wpi;

class TeleopDrive : public CommandBase {
 public:
  TeleopDrive();
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;
};

#endif
