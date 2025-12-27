#include <chrono>
#include <functional>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include"serve_interfaces/msg/data.hpp"

using namespace std::chrono_literals;
using namespace serve_interfaces;



class ServeData:public rclcpp::Node{
    public:
        ServeData():Node("sensor"){
         publisher_ = this->create_publisher<msg::Data>("sensor",10);
            timer_ = this->create_wall_timer(500ms,std::bind(&ServeData::timer_callback,this));
        }
    private:
        void timer_callback()
    {   
        auto sensorData = msg::Data();
        sensorData.distance=0;
        /*
        
        
            거리를 재고
            distance에 저장후 
            센서데이터객체 넘겨서 퍼블리싱
        
        
        */











        sensorData.distance =distance;
      RCLCPP_INFO(this->get_logger(), "Publishing: '%f'",distance );
      publisher_->publish(sensorData);
    }
        rclcpp::Publisher<msg::Data>::SharedPtr publisher_;
        rclcpp::TimerBase::SharedPtr timer_;
        double distance;
};