/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/GrabberSystem.h"

GrabberSystem::GrabberSystem() : Subsystem("GrabberSystem") {}

void GrabberSystem::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
  grabber = new DoubleSolenoid(0, 1);
  armTilt = new DoubleSolenoid(2, 3);
  popper = new DoubleSolenoid(4, 5);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void GrabberSystem::OpenGrabber()
{
  grabber->Set(frc::DoubleSolenoid::Value::kForward);
}
void GrabberSystem::CloseGrabber()
{
  grabber->Set(frc::DoubleSolenoid::Value::kReverse);
}

void GrabberSystem::TiltUp(){
  armTilt->Set(frc::DoubleSolenoid::Value::kForward);
} 
void GrabberSystem::TiltDown(){
  armTilt->Set(frc::DoubleSolenoid::Value::kReverse);
} 

void GrabberSystem::PopperOut()
{
  popper->Set(frc::DoubleSolenoid::Value::kForward);
}
void GrabberSystem::PopperIn()
{
  popper->Set(frc::DoubleSolenoid::Value::kReverse);
}

bool GrabberSystem::IsGrabberOpen()
{
  if (grabber->Get() == DoubleSolenoid::Value::kForward)
  {
    return true;
  }
  else
  {
    return false;
  }
}
bool GrabberSystem::IsGrabberClosed()
{
  if (grabber->Get() == DoubleSolenoid::Value::kReverse)
  {
    return true;
  }
  else
  {
    return false;
  }
}

bool GrabberSystem::IsArmTiltedUp()
{
  if (armTilt->Get() == DoubleSolenoid::Value::kForward)
  {
    return true;
  }
  else
  {
    return false;
  }
}
bool GrabberSystem::IsArmTiltedDown()
{
  if (armTilt->Get() == DoubleSolenoid::Value::kReverse)
  {
    return true;
  }
  else
  {
    return false;
  }
}

bool GrabberSystem::IsPopperOut()
{
  if (popper->Get() == DoubleSolenoid::Value::kForward)
  {
    return true;
  }
  else
  {
    return false;
  }
}

bool GrabberSystem::IsPopperIn()
{
  if (popper->Get() == DoubleSolenoid::Value::kReverse)
  {
    return true;
  }
  else
  {
    return false;
  }
}