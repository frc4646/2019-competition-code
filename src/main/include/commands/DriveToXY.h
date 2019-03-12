/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#ifndef DriveToXY_H
#define DriveToXY_H

#include <CommandBase.h>

class DriveToXY : public CommandBase {
 private:
  double driveTheta;
  double driveDistance;
  double driveAngle;
  double driveX;
  double driveY;
  double driveH;
 public:
  DriveToXY(double x, double y, double h);
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;
};
#endif
