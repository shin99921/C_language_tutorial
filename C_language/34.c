#include <stdio.h>

int main() {

	long int limit;
	double n=0,m=0;
	double s=1.0;

	scanf("%ld",&limit);

	for (long int i=1; i <= limit; i++)
	{
		n += 1.0/i;
		m += (1.0/i)*s;
		s=-s;
	}

	printf("%0.5f %0.5f\n",n,m);
	return 0;
}	
