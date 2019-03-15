/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#ifndef LiftControl_H
#define LiftControl_H

#include <CommandBase.h>

class LiftControl : public CommandBase {
 private:
  const double minValue = 0.1; //any joystick reading between -minPower and minPower will not affect lift power (lift will hold)
  double liftPower;
  double slope;
  double power;

 public:
  LiftControl();
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;
};
#endif