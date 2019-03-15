/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/UltraSonic.h"
#include <RobotMap.h>
#include <frc/WPILib.h>
#include <PinEnums.h>

UltraSonic::UltraSonic(int pin) : Subsystem("UltraSonic"), UltraSonicPin(pin) {}

void UltraSonic::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

int UltraSonic::GetCounts(){
	return UltraSonicPin.GetValue();
}

//last year's code, needs testing
double UltraSonic::GetDistance(){
	int counts = GetCounts();
	double distanceIntoRobot = 100; //TO DO, in mm

	//5 is from data sheet: 1 count = 5 mm
	//data sheet: https://www.maxbotix.com/documents/HRLV-MaxSonar-EZ_Datasheet.pdf
	//will return distance in mm
	return ((counts*5) - distanceIntoRobot);
}