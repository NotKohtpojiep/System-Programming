#pragma once
double getTravelCost(int kilometres, double rashod, double bensinPrice) {
	double itogoRashod = kilometres * 2 / 100 * rashod;
	double cost = itogoRashod * bensinPrice;
	return cost;
}