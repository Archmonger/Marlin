// Old settings I'm migrating over
#define BAUDRATE 250000
#define TEMP_SENSOR_0 5
#define PID_EDIT_MENU
#define BLTOUCH
#define NOZZLE_TO_PROBE_OFFSET \
  {                            \
    -38, -5, 0                 \
  }
#define UNKNOWN_Z_NO_RAISE // "UNKNOWN_Z_NO_RAISE is replaced by setting Z_IDLE_HEIGHT to Z_MAX_POS."
#define X_BED_SIZE 230
#define Y_BED_SIZE 215
#define Z_MAX_POS 305
#define FILAMENT_RUNOUT_SENSOR
#define FILAMENT_RUNOUT_DISTANCE_MM 100
#define FILAMENT_MOTION_SENSOR
#define AUTO_BED_LEVELING_BILINEAR
#define Z_SAFE_HOMING
#define NOZZLE_PARK_POINT                  \
  {                                        \
    (X_MIN_POS + 220), (Y_MAX_POS - 5), 20 \
  }
#define FAN_SOFT_PWM
#define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN