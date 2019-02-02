/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#ifndef IntakeControl_H
#define IntakeControl_H

#include <CommandBase.h>
#include <frc/WPILib.h>

using namespace frc;

class GrabberControl : public CommandBase {
 public:
  GrabberControl();
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;
};

#endif