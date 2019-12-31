#include <Wire.h>

TwoWire HWire (2, I2C_FAST_MODE);

uint8_t diasable_throttle, flip32;
uint8_t error;
uint32_t loop_timer;
float angle_roll_acc, angle_pitch_acc, angle_pitch, angle_roll;
float battery_voltage;
int16_t loop_counter;
uint8_t data, start, warning;
int16_t acc_axis[4], gyro_axys[4], temperature;
int32_t gyro_axis_cal[4], acc_axis_cal[4];
int32_t cal_int;
int32_t channel_1_start, channel_1;
int32_t channel_2_start, channel_2;
int32_t channel_3_start, channel_3;
int32_t channel_4_start, channel_4;
int32_t channel_5_start, channel_5;
int32_t channel_6_start, channel_6;
int32_t measured_time, measured_time_start;
uint8_t channnel_select_counter;

// BAROMETER VARIABLE

uint16_t C[7];
uint8_t barometer_counter, temperature_counter;
int64_t OFF, OFF_C2, SENS, SENS_C1, P;
uint32_t raw_pressure, raw_temperature, temp;
float actual_pressure, actual_pressure_slow, actual_pressure_fast, actual_pressure_diff;
float ground_pressure, altitude_hold_pressure;
int32_t dT, dT_C5;

// COMPASS VARIABLE
int16_t compass_x, compass_y, compass_z;

uint8_t gyro_address = 0x68;                                                                                             // The I2C address of the MPU-6050 is 0x68 in hexadecimal form
uint8_t MS5611_address = 0x77;                                                                                           // The I2C address of the MS5611 barometer is 0x77 in hexadecimal form
uint8_t compass_address = 0x1E;                                                                                          // The I2C address of the HMC5883L is 0x1E in hexadecimal form

void setup() {

    pinMode(4, INPUT_ANALOG);
    
}