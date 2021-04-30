#pragma once
int getDiscont(int price) {
	if (price <= 500)
		return 0;
	if (price < 1000)
		return 3;
	return 5;
}

double getDiscondPrice(int price, int discont) {
	double discontPrice = price / 100 * discont;
	return discontPrice;
}