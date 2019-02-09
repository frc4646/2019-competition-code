/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

/*
                              ..                    ..                         ...               
           .,.         ',,,,,,,;;:;;;;;;;;;;;;;;;;;;;;:::;;;;:;;;;;;;;;;;;;;;;;;;;;;:;;,.           
           ;lc.       .:ooollllllllllllllllllllllllllooooollllllllllllllllllllllllllllll:.          
          ,loo:.      .:ool;........................,coool,..........''''''''''''''''''''.          
         ,loooo:.     .:ooc,.                     ..;loool:.        .';:::::::::::::::::,.          
        'lol::ol;.   .'cooc,.                    .';loc:col;.        ,looolllllllllllooo:.          
       .col, .col;.   ':ool;.............       .;clol,.,col;.       ,looc,''''''''';loo:.          
      .col;.  .col;.  'cooollllllllllllc'      .,lool;. .,lol;.      ,loo:.         'coo:.          
     .coo:.    'col,...,::::;;::::::clol,     .,cool:.   .;lol,.    .,loo:.         'loo:.          
    .:ool:,,,',;cool,.             .;lol,     'coool:;;;;;:llol,.    ,loo:.         'coo:.          
   .:oolllllllllllloc'             .;lol,    'coollllllllllllooc,.   ,coo:.         'coo:.          
  .;loc'..........;loc'.           .;lol,   .cooc'..........':ooc'  .,coo:.         'coo:.          
 .;loc'           .;loc:::::::::::::clol,  .:ooc'            .cooc. .,cool;,,,,,,,,,:loo:.          
 ,llc'             .;looolllllllllllllll,..;llc'              'cll:..,looollllllllllllll:.          
 ....               .;looc,.............. .....                ......,looc'..............           
                      'col:'.                                       .,loo:.                         
                       .;lol:'.                                      ,loo:.                   .     
                         .;lolc;..                                   ,loo:.               ....      
                           .,:lolc;'.                                ,loo:.           ......        
                              .';clll:;,..                           ,loo:.     ...'''...           
                                 ..';:lllc:;;,'.....                .,looc'.',,,,'..                
                                      ..',;:cllllccc::;;;;;;,,,,;;;;;clool;,'..                     
                                             ....''',,,;;;;;;;;;,,''.;loo:.                         
                                                                     .',,.                          
*/

#include "CommandBase.h"
#include <frc/Commands/Scheduler.h>
/*
#include <subsystems/TankDriveSystem.h>
#include <subsystems/LiftSystem.h>
#include "subsystems/TiltSystem.h"
#include "subsystems/GrabberSystem.h"
*/


// Initialize a single static instance of all of your subsystems. The following
// line should be repeated for each subsystem in the project.

std::unique_ptr<TankDriveSystem> CommandBase::drivetrain = NULL; //std::make_unique<TankDriveSystem>();
std::unique_ptr<LiftSystem> CommandBase::lift = NULL;
std::unique_ptr<GrabberSystem> CommandBase::grab = NULL;
std::unique_ptr<IntakeSystem> CommandBase::intake = NULL;
std::unique_ptr<PerceptionSystem> CommandBase::percept = NULL;
<<<<<<< HEAD
std::unique_ptr<PopperSystem> CommandBase::pop = NULL;
std::unique_ptr<ClimberSystem> CommandBase::slam = NULL;
=======
>>>>>>> f4b0057b8631edc401f5452c4460c5f659a16a2a
std::unique_ptr<OI> CommandBase::oi = std::make_unique<OI>();

CommandBase::CommandBase(const std::string &name) :
		frc::Command(name) {

}

void CommandBase::init() {
	drivetrain.reset(new TankDriveSystem());
  lift.reset(new LiftSystem());
  grab.reset(new GrabberSystem());
  intake.reset(new IntakeSystem());
  percept.reset(new PerceptionSystem());
<<<<<<< HEAD
  pop.reset(new PopperSystem());
  slam.reset(new ClimberSystem());
=======
>>>>>>> f4b0057b8631edc401f5452c4460c5f659a16a2a
}
