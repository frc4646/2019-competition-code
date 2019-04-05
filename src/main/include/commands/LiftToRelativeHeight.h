/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <CommandBase.h>

class LiftToRelativeHeight : public CommandBase {
 private:
  double dist;
  bool isLiftHigher;
  double tolerance = 0.2;
  public:
  LiftToRelativeHeight(double relativeDistance);
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;
};
