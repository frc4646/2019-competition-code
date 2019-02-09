/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/


#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include <memory>
#include <string>

#include <frc/Commands/Command.h>
using namespace frc;

#include "OI.h"

#include <subsystems/TankDriveSystem.h>
#include <subsystems/LiftSystem.h>
#include <subsystems/GrabberSystem.h>
#include <subsystems/IntakeSystem.h>
#include <subsystems/PerceptionSystem.h>
#include <subsystems/ClimberSystem.h>


/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 * CommandBase stores creates and stores each control system. To access a
 * subsystem elsewhere in your code in your code use
 * CommandBase::exampleSubsystem
 */
class CommandBase : public frc::Command {
public:
	CommandBase(const std::string& name);
	CommandBase() = default;

	static void init();

	// Create a single static instance of all of your subsystems
	static std::unique_ptr<TankDriveSystem> drivetrain;
	static std::unique_ptr<LiftSystem> lift;
	static std::unique_ptr<GrabberSystem> grab;
	static std::unique_ptr<IntakeSystem> intake;
	static std::unique_ptr<PerceptionSystem> percept;
	static std::unique_ptr<ClimberSystem> slam;
	static std::unique_ptr<OI> oi;

};

#endif  // COMMAND_BASE_H