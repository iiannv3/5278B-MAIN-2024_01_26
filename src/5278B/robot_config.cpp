#include "main.h"
#include "pros/adi.h"

pros::Motor slapper(15, pros::E_MOTOR_GEAR_100, false,
                    pros::E_MOTOR_ENCODER_ROTATIONS);
pros::Motor intake(15, pros::E_MOTOR_GEAR_600, false,
                   pros::E_MOTOR_ENCODER_ROTATIONS);
pros::ADIDigitalOut horizontal_wing_A(3, LOW);
pros::ADIDigitalOut horizontal_wing_B(4, LOW);
pros::ADIDigitalOut vertical_wing_A(1, LOW);
pros::ADIDigitalOut vertical_wing_B(2, LOW);