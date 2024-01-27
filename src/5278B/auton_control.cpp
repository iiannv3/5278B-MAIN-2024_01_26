#include "main.h"
void intake_in(int speed) { intake.move_voltage(speed * (12000 / 127)); }
void intake_out(int speed) { intake.move_voltage(speed * (-12000 / 127)); }
void intake_stop() { intake.move_voltage(0); }
void slapper_start() { slapper.move_voltage(11500); }
void slapper_stop() { slapper.move_voltage(0); }
void all_wings_active() {
  horizontal_flap_A.set_value(true);
  horizontal_flap_B.set_value(true);
  vertical_flap_A.set_value(true);
  vertical_flap_B.set_value(true);
}
void horizontal_flap_A_active() { horizontal_flap_A.set_value(true); }
void horizontal_flap_B_active() { horizontal_flap_B.set_value(true); }
void vertical_flap_A_active() { vertical_flap_A.set_value(true); }
void vertical_flap_B_active() { vertical_flap_B.set_value(true); }
void all_wings_de_active() {
  horizontal_flap_A.set_value(false);
  horizontal_flap_B.set_value(false);
  vertical_flap_A.set_value(false);
  vertical_flap_B.set_value(false);
}