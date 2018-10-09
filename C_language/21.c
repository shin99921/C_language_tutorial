#include <stdio.h>

void func(double num);

int main() {

	double far;

	scanf("%lf",&far);

	func(far);

	return 0;

}

void func(double num) {
	const double FTC = 5.0 / 9.0;
	const double CTK = 273.16;

	double cel = FTC * (num - 32.0);
	double kel = cel + CTK;

	printf("Fahrenheit: %.2f = Celsius: %.2f = Kelvin: %.2f\n",num,cel,kel);

}
