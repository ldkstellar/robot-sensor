#include "motor_base/regular_motor.hpp"

using namespace controll_base;
namespace motor_plugins {
class LeftMotor : public Motor {
  void servePWM() {}
};

class RightMotor : public Motor {
  void servePWM() {}
};

} // namespace motor_plugins
