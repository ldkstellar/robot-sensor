#include <functional>
#include <memory>
#include <thread>

#include "rclcpp/rclcpp.hpp"
#include "serve_interfaces/msg/data.hpp"
using namespace serve_interfaces;
class Brain : public rclcpp::Node {
public:
  Brain() : Node("brain"),distance(-1){
    sensorSubscription_ = this->create_subscription<msg::Data>(
        "sensor", 10,
        std::bind(&Brain::recieveSensorCallback, this)); // 센서 받는 구독자
    //videoSubscription_
    senser_to_motor_ =  this->create_publisher<msg::Data>("send_motor",10);


  }

private:
  rclcpp::Subscription<msg::Data>::SharedPtr sensorSubscription_;
  rclcpp::Publisher<msg::Data>::SharedPtr senser_to_motor_;
  // rclcpp::Subscription<>::SharedPtr videoSubscription_; 
  // subscribe 할것인지 고민을 해야한다.
  rclcpp::TimerBase::SharedPtr timer_;
  
  void recieveSensorCallback(const msg::Data &data) {
    std::mutex Mutex;
    Mutex.lock();
    RCLCPP_INFO(this->get_logger(), "I heard: '%f'", data.distance);
    distance = data.distance; //객체가 살아있는한 이 값dms 변화하지않는다.
    Mutex.unlock();
  }
 void timer_callback()
 { 
    auto sensor_distance = msg::Data();//개체로 전달해야 한다. 그래서 생성자 호출 
    sensor_distance.distance = distance;
    RCLCPP_INFO(this->get_logger(), "Publishing: '%f'", distance);
    senser_to_motor_->publish(sensor_distance);
    
    }
  double distance;
};

int main(int argc, char const *argv[]) { return 0; }
