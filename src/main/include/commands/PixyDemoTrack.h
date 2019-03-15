/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#ifndef PixyDemoTrack_H
#define PixyDemoTrack_H

#include <CommandBase.h>

using namespace frc;
using namespace wpi;

class PixyDemoTrack : public CommandBase {
  private:
  int run;
 public:
  PixyDemoTrack();
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;
};
#endif