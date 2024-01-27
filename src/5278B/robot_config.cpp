#include "main.h"
#include "pros/adi.hpp"
#include "pros/motors.h"
#include "pros/motors.hpp"

pros::Motor slapper(15, pros::E_MOTOR_GEAR_100, false,
                    pros::E_MOTOR_ENCODER_ROTATIONS);
pros::Motor intake(15, pros::E_MOTOR_GEAR_600, false,
                   pros::E_MOTOR_ENCODER_ROTATIONS);
pros::ADIDigitalOut horizontal_flap_A(3);
pros::ADIDigitalOut horizontal_flap_B(4);
pros::ADIDigitalOut vertical_flap_A(1);
pros::ADIDigitalOut vertical_flap_B(2);