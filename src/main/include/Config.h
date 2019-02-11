/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

/*
 * Config.h
 *
 *  Created on: Feb 9, 2019
 *      Author: ASAP 4646
 *
 *  Config.h replaces RobotMap.h, and then some.
 */

#ifndef Config_H
#define Config_H

#include "PinEnums.h"
#include <frc/WPILib.h>

#define DRIVETRAIN_INIT_PARAMS frontLeftPin, frontRightPin, backLeftPin, backRightPin
const MotorPin frontLeftPin = M0;
const MotorPin frontRightPin = M1;
const MotorPin backLeftPin = M2;
const MotorPin backRightPin = M3;

#define LIFT_INIT_PARAMS liftMotorPin, stringPotPin
const MotorPin liftMotorPin = M4;
const AnalogPin stringPotPin = A0;

#define INTAKE_INIT_PARAMS intakeMotorPin, rightIntakeForward, rightIntakeReverse, leftIntakeForward, leftIntakeReverse
const MotorPin intakeMotorPin = M5; //for both intake motors

const SolenoidPin rightIntakeForward = S0;
const SolenoidPin rightIntakeReverse = S1;
const SolenoidPin leftIntakeForward = S2;
const SolenoidPin leftIntakeReverse = S3;

#define GRABBER_INIT_PARAMS grabberForward, grabberReverse, grabberTiltForward, grabberTiltReverse, popperForward, popperReverse
const SolenoidPin grabberForward = S4;
const SolenoidPin grabberReverse = S5;

const SolenoidPin grabberTiltForward = S6;
const SolenoidPin grabberTiltReverse = S7;

const SolenoidPin2 popperForward = P0;
const SolenoidPin2 popperReverse = P1;

#define CLIMBER_INIT_PARAMS climberForward, climberReverse
const SolenoidPin2 climberForward = P2;
const SolenoidPin2 climberReverse = P3;

const int encoderTicksPreRevolution = 1; //will have to test for later

#endif