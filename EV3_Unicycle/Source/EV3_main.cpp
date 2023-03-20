//*************************
//*** EV3 Main Function ***
//*************************

#define _USE_MATH_DEFINES
#include <cmath>

#include <EV3_LCDDisplay.h>
#include <EV3_Sensor_Gyro.h>
#include <EV3_Timer.h>
#include <EV3_Sensor_Ultrasonic.h>


int EV3_main()
{
	
	ev3_c_api::ResetHard(ev3_c_api::E_Port_1);
	//ev3_c_api::ResetAngle(ev3_c_api::E_Port_1);
	ev3_c_api::ResetRate(ev3_c_api::E_Port_1);
	ev3_c_api::T_TimerId timerId = 0;
	ev3_c_api::Timer_Start(0);
	unsigned long last_update = ev3_c_api::Timer_GetTime(timerId);
	double g = 9.81;
	double m = 1.0; //kgs
	double c = 0.15; //m between origin and mass center
	double a0 = -102.0 / 360 * 2 * M_PI; //balancing angle in rads
	double t = 0.5; // how fast we want to balance (s)
	double I = m * c * c;
	double a = 0; //rads
	double a_prev = 0;
	double v = 0.1; //height difference from wheel axis to rear ultrasonic sensor
	double b = 0.07; // lateral distance -"-
	double r = 0.02; //wheel radius
	double sinbeta = 3.0 / 5.0;
	double cosbeta = 4.0 / 5.0;

	
	while (true) {
		unsigned long this_update = ev3_c_api::Timer_GetTime(timerId);
		if (this_update - last_update > 10) {
			last_update = this_update;
			a_prev = a;
			a = ev3_c_api::GetAngle(ev3_c_api::E_Port_1) / 360.0 * M_PI * 2;
			//double omega = a - a_prev;
			double omega = ev3_c_api::GetRate(ev3_c_api::E_Port_1);
			

			double d = ev3_c_api::GetDistance(ev3_c_api::E_Port_3) / 1000.0;
			double e = d * sinbeta + b;
			double f = d * cosbeta - v;
			double s = e*e + f*f;
			a = acos((-r*e + f*sqrt(s - r*r)) / s);

			double F = m * ((2 * c * (a - a0 - omega * t)) / (t * t * sin(a)) - g * tan(M_PI_2 - a));

			ev3_c_api::Clear_Text(3, ev3_c_api::E_Font_Large);
			ev3_c_api::Clear_Text(4, ev3_c_api::E_Font_Large);
			ev3_c_api::Draw_Text(3, ev3_c_api::E_Font_Large, false, "%d, %d", ev3_c_api::GetRate(ev3_c_api::E_Port_1), ev3_c_api::GetDistance(ev3_c_api::E_Port_3));
			ev3_c_api::Draw_Text(4, ev3_c_api::E_Font_Large, false, "%f", a);
		}



		
	}
    return 0;
	
	
}
