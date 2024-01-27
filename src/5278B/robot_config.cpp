#include "main.h"
#include "pros/adi.h"

pros::Motor slapper(15, pros::E_MOTOR_GEAR_100, true,
                    pros::E_MOTOR_ENCODER_ROTATIONS);
pros::Motor intake(13, pros::E_MOTOR_GEAR_600, true,
                   pros::E_MOTOR_ENCODER_ROTATIONS);
pros::ADIDigitalOut horizontal_flap_A(3, LOW);
pros::ADIDigitalOut horizontal_flap_B(4, LOW);
pros::ADIDigitalOut vertical_flap_A(1, LOW);
pros::ADIDigitalOut vertical_flap_B(2, LOW);