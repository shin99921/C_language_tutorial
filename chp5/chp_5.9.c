#include <stdio.h>

void func(double num);

int main() {

	double far;

	scanf("%lf",&far);

	while (far > 0)
	{
		func(far);
		scanf("%lf",&far);
	}

	return 0;

}

void func(double num) {
	const double FTC = 5.0 / 9.0;
	const double CTK = 273.16;

	double cel = FTC * (num - 32.0);
	double kel = cel + CTK;

	printf("%.2f degree farhenheit is %.2f degree celsius or %.2f degree kelvin.\n",num,cel,kel);

}
