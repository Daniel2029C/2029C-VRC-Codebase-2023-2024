#pragma once


#include <vector>
#include <v5.h>
#include <v5_vcs.h>
#include <cstdio>
#include <cmath>
#include <numeric>
#include <memory>
#include <map>


extern vex::controller controller;
extern vex::motor fl;
extern vex::motor fr;
extern vex::motor ml;
extern vex::motor mr;
extern vex::motor bl;
extern vex::motor br;
extern vex::motor catapult;
extern vex::motor catapult2;
extern vex::motor intake;
extern vex::motor intake2;
extern vex::motor_group leftDrivetrain;
extern vex::motor_group rightDrivetrain;
extern vex::motor_group drivetrain;
extern vex::brain brain;
extern vex::inertial imu;
extern vex::rotation parallel;
extern vex::rotation sideways;
extern vex::rotation cataRotation;
extern vex::digital_out backRightWing;
extern vex::digital_out frontRightWing;
extern vex::digital_out frontLeftWing;
extern vex::digital_out backLeftWing;
extern vex::digital_out hang;
extern vex::digital_out pto;