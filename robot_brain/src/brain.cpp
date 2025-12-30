#include <functional>
#include <memory>
#include <thread>

#include "rclcpp/rclcpp.hpp"
#include "serve_interfaces/msg/data.hpp"
using namespace serve_interfaces;
class Brain : public rclcpp::Node {
public:
  Brain() : Node("brain"), Distance(0) {
    sensorSubscription_ = this->create_subscription<msg::Data>(
        "sensor", 10,
        std::bind(&Brain::sensorCallbak, this)); // 센서 받는 구독자
        // 물체에 가까이 접촉되어있나 확인 1순위 속도조절
        //1. 서버에 전달하는 클라언트 구축 distance전달
        //2.서버에서 전달받으면 거리에 따라 모터 속도조절
        // 카메라 센서로 물체 축과 크기에인해 조향 2순위 



  }

private:
  rclcpp::Subscription<msg::Data>::SharedPtr sensorSubscription_;
  // rclcpp::Subscription<>::SharedPtr videoSubscription_; 멀티스레드로 어떻게
  // subscribe 할것인지 고민을 해야한다.
  double Distance; //
  void sensorCallbak(const msg::Data &data) {
    RCLCPP_INFO(this->get_logger(), "I heard: '%f'", data.distance);
    Distance = data.distance;
  }
};

int main(int argc, char const *argv[]) { return 0; }
