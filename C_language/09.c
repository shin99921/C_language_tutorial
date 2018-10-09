#include <stdio.h>

int main() {
	long double a;
	
	scanf("%lf", &a);
	
	printf("Fixed-point notation: %lf\n",a);
	printf("Exponential notation: %e\n",a);
	printf("p notation: %a\n",a);
	
	return 0;
}
