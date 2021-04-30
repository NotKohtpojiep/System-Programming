#pragma once
double getSpeed(int metres, double minutes) {
	double kilometres = metres / 1000.00;
	double hours = minutes / 60.00;
	double speed = kilometres / hours;
	return speed;
}