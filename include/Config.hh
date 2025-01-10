// if defined, enables EXTERNAL_TEST_MODE:
// simulating a real drone (disabled lockstepping, no quaternion and velocity, just magnetic field and attitude)
// in addition using data bytes instead of a json string to transfer sensor values

#define EXTERNAL_TEST_MODE

#ifdef EXTERNAL_TEST_MODE
#define ADD_MAGNETOMETER
#define ADD_ALTIMETER
#endif
