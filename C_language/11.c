#include <stdio.h>

int main() {
	float pint,cups,ounce,tablespoons,teaspoons;
	
	scanf("%f",&cups);
	
	pint=cups/2;
	ounce=cups*8;
	tablespoons=ounce*2;
	teaspoons=tablespoons*3;
	
	printf("%f cups are equivalent to each of the following:\n",cups);
	printf("%f pints\n%f tablespoons\n%f teaspoons\n",pint,tablespoons,teaspoons);
	
	return 0;
}
