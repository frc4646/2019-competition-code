/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#ifndef TiltUp_H
#define TiltUp_H

#include <frc/commands/Command.h>
#include <frc/WPILib.h>
#include <CommandBase.h>


using namespace frc;

class TiltUp : public CommandBase {
 public:
  TiltUp();
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;
};

#endif