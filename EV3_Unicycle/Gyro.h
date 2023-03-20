#pragma once

#include <EV3_Sensor_Gyro.h>

/* A class implementation of an EV3 Gyro based on the functions of cpp4robots.
Daisy chain is not implemented.*/
class Gyro
{
public:
	Gyro(ev3_c_api::E_Sensor_Port port);
	/* The ResetHard function performs complete reset of gyro sensor.*/
	void ResetHard();
	/* The ResetAngle function resets gyro sensor in "Angle mode".*/
	void ResetAngle();
	/* The GetAngle function works in the "Angle mode".
	This function returns the current value of angle from the sensor.
	@return Current value of angle from the sensor.*/
	int GetAngle();
	/* The ResetRate function resets gyro sensor in "Rate mode".*/
	void ResetRate();
	/* The GetRate function works in the "Rate Mode".
	This function returns the rate of rotation in degrees per second from the sensor.
	@return Rate of rotation in degrees per second from the sensor.*/
	int GetRate();

private:
	ev3_c_api::E_Sensor_Port port;

};

