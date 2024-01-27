#include "main.h"

void intake_control() {
  // While for task
  while (true) {
    // If L1 is pressed, move the intake motor to intake
    if (master.get_digital(pros::E_CONTROLLER_DIGITAL_L1)) {
      intake.move_voltage(11500);
    }
    // If L2 is pressed, move the intake motor to outtake
    else if (master.get_digital(pros::E_CONTROLLER_DIGITAL_L2)) {
      intake.move_voltage(-11500);
    }
    // If no buttons are pressed, than stop the motor
    else {
      intake.move_voltage(0);
    }
    // This is used for timer calculations!
    pros::delay(ez::util::DELAY_TIME);
  }
}

void slapper_control() {
  // While for task
  while (true) {
    // If R1 is pressed, rotate the slapper
    if (master.get_digital(pros::E_CONTROLLER_DIGITAL_R1)) {
      slapper.move_voltage(11500);
    }
    // If no buttons are pressed, than stop the motor
    else {
      slapper.move_voltage(0);
    }
    // This is used for timer calculations!
    pros::delay(ez::util::DELAY_TIME);
  }
}
void flap_control() {
  // While for task
  while (true) {
    // If R2 is pressed, activate all the wings
    if (master.get_digital(pros::E_CONTROLLER_DIGITAL_R2)) {
      horizontal_flap_A.set_value(true);
      horizontal_flap_B.set_value(true);
      vertical_flap_A.set_value(true);
      vertical_flap_B.set_value(true);
    }
    // If left is pressed, activate the left horizontal wing
    else if (master.get_digital(pros::E_CONTROLLER_DIGITAL_LEFT)) {
      horizontal_flap_A.set_value(true);
    }
    // If right is pressed, activate the right horizontal wing
    else if (master.get_digital(pros::E_CONTROLLER_DIGITAL_RIGHT)) {
      horizontal_flap_B.set_value(true);
    }
    // If X is pressed, activate both vertical wings
    else if (master.get_digital(pros::E_CONTROLLER_DIGITAL_X)) {
      vertical_flap_A.set_value(true);
      vertical_flap_B.set_value(true);
    }
    // If Y is pressed, activate the left vertical wing
    else if (master.get_digital(pros::E_CONTROLLER_DIGITAL_Y)) {
      vertical_flap_A.set_value(true);
    }
    // If A is pressed, activate the right vertical wing
    else if (master.get_digital(pros::E_CONTROLLER_DIGITAL_A)) {
      vertical_flap_B.set_value(true);
    }
    // If nothing is pressed, de-activate all the wings
    horizontal_flap_A.set_value(false);
    horizontal_flap_B.set_value(false);
    vertical_flap_A.set_value(false);
    vertical_flap_B.set_value(false);
  }
  // This is used for timer calculations!
  pros::delay(ez::util::DELAY_TIME);
}