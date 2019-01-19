/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/AlignToTarget.h"

AlignToTarget::AlignToTarget() {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  // Requires Perception Subsystem, Tank Drive Subsystem
  // Simaliar to Drive to XY
}

// Called just before this Command runs the first time
void AlignToTarget::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void AlignToTarget::Execute() {
  /*
  Ask {
    is Vision Target in view of Pixy2 and/or ultrasonic with in certain distance {
      if yes {
        turn tward target 
        move tward target checking that i am still facing the target
      } else no {
        end Align to target
      }
    }
  }
  */
}

// Make this return true when this Command no longer needs to run execute()
bool AlignToTarget::IsFinished() { 
  return false; 
}

// Called once after isFinished returns true
void AlignToTarget::End() {
  //if vision target is not in sight with in certain distance
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AlignToTarget::Interrupted() {

}
