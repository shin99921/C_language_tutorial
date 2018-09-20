#include <stdio.h>

int main() {
	
	float cups,pint,ounces,tablespoons,teaspoons;
	
	printf("input cups:");
	scanf("%f",&cups);

	pint = cups*2;
	ounces = cups/8;
	tablespoons = ounces/2;
	teaspoons = tablespoons/3;

	printf("pint: %f, ounces: %f, tablespoons: %f, teaspoons: %f\n",pint,ounces,tablespoons,teaspoons);

	return 0 ;
}
