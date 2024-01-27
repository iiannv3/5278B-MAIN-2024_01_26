#include "main.h"

void intake_control() {
  while (true) {
    if (master.get_digital(pros::E_CONTROLLER_DIGITAL_L1)) {
      intake.move_voltage(11500);
    } else if (master.get_digital(pros::E_CONTROLLER_DIGITAL_L2)) {
      intake.move_voltage(-11500);
    } else {
      intake.move_voltage(0);
    }
    pros::delay(ez::util::DELAY_TIME);
  }
}

void slapper_control() {
  while (true) {
    if (master.get_digital(pros::E_CONTROLLER_DIGITAL_R1)) {
      slapper.move_voltage(11500);
    } else {
      slapper.move_voltage(0);
    }
    pros::delay(ez::util::DELAY_TIME);
  }
}
void wing_control() {
  while (true) {
    if (master.get_digital(pros::E_CONTROLLER_DIGITAL_R2)) {
      horizontal_wing_A.set_value(true);
      horizontal_wing_B.set_value(true);
      vertical_wing_A.set_value(true);
      vertical_wing_B.set_value(true);
    } else if (master.get_digital(pros::E_CONTROLLER_DIGITAL_LEFT)) {
      horizontal_wing_A.set_value(true);
    } else if (master.get_digital(pros::E_CONTROLLER_DIGITAL_RIGHT)) {
      horizontal_wing_B.set_value(true);
    } else if (master.get_digital(pros::E_CONTROLLER_DIGITAL_X)) {
      vertical_wing_A.set_value(true);
      vertical_wing_B.set_value(true);
    } else if (master.get_digital(pros::E_CONTROLLER_DIGITAL_Y)) {
      vertical_wing_A.set_value(true);
    } else if (master.get_digital(pros::E_CONTROLLER_DIGITAL_A)) {
      vertical_wing_B.set_value(true);
    } else {
      horizontal_wing_A.set_value(false);
      horizontal_wing_B.set_value(false);
      vertical_wing_A.set_value(false);
      vertical_wing_B.set_value(false);
    }
    pros::delay(ez::util::DELAY_TIME);
  }
}