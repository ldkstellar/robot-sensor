#ifndef MOTOR_PLUGINS__VISIBILITY_CONTROL_H_
#define MOTOR_PLUGINS__VISIBILITY_CONTROL_H_

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define MOTOR_PLUGINS_EXPORT __attribute__ ((dllexport))
    #define MOTOR_PLUGINS_IMPORT __attribute__ ((dllimport))
  #else
    #define MOTOR_PLUGINS_EXPORT __declspec(dllexport)
    #define MOTOR_PLUGINS_IMPORT __declspec(dllimport)
  #endif
  #ifdef MOTOR_PLUGINS_BUILDING_LIBRARY
    #define MOTOR_PLUGINS_PUBLIC MOTOR_PLUGINS_EXPORT
  #else
    #define MOTOR_PLUGINS_PUBLIC MOTOR_PLUGINS_IMPORT
  #endif
  #define MOTOR_PLUGINS_PUBLIC_TYPE MOTOR_PLUGINS_PUBLIC
  #define MOTOR_PLUGINS_LOCAL
#else
  #define MOTOR_PLUGINS_EXPORT __attribute__ ((visibility("default")))
  #define MOTOR_PLUGINS_IMPORT
  #if __GNUC__ >= 4
    #define MOTOR_PLUGINS_PUBLIC __attribute__ ((visibility("default")))
    #define MOTOR_PLUGINS_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define MOTOR_PLUGINS_PUBLIC
    #define MOTOR_PLUGINS_LOCAL
  #endif
  #define MOTOR_PLUGINS_PUBLIC_TYPE
#endif

#endif  // MOTOR_PLUGINS__VISIBILITY_CONTROL_H_
