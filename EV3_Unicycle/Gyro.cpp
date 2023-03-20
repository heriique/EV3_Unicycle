#include "Gyro.h"



Gyro::Gyro(ev3_c_api::E_Sensor_Port port)
{
	this->port = port;
}

void Gyro::ResetHard()
{
	ev3_c_api::ResetHard(port);
}

void Gyro::ResetAngle()
{
	ev3_c_api::ResetAngle(port);
}

int Gyro::GetAngle()
{
	return ev3_c_api::GetAngle(port);
}

void Gyro::ResetRate()
{
	ev3_c_api::ResetRate(port);
}

int Gyro::GetRate()
{
	return ev3_c_api::GetRate(port);
}
