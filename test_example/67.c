#include <stdio.h>

double fn (double i, double j);

int main() {

	double i,j;

	while (scanf("%lf %lf",&i,&j) == 2)
		printf("%0.3f\n",fn(i,j));

	return 0;
}

double fn (double i, double j)
{
	return 2 / ((1 / i) + (1 / j));
}
