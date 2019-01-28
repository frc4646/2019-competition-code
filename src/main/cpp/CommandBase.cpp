/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "CommandBase.h"
#include <frc/Commands/Scheduler.h>
#include <subsystems/TankDriveSystem.h>

// Initialize a single static instance of all of your subsystems. The following
// line should be repeated for each subsystem in the project.

std::unique_ptr<TankDriveSystem> CommandBase::drivetrain = NULL; //std::make_unique<TankDriveSystem>();
std::unique_ptr<OI> CommandBase::oi = std::make_unique<OI>();

CommandBase::CommandBase(const std::string &name) :
		frc::Command(name) {

}

void CommandBase::init() {
	drivetrain.reset(new TankDriveSystem());
}
