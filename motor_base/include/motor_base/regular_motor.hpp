

namespace controll_base {
class Motor {
public:
  virtual ~Motor() {}
  void virtual servePWM() = 0;
};

}; // namespace controll_base
