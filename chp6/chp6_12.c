#include <stdio.h>

int main() {

	long int limit;
	float n=0,m=0;
	float s=1.0f;

	while(1)
	{
		scanf("%ld",&limit);
		
		if (limit <=0)
			break;

		for (long int i=1; i <= limit; i++)
		{
			n += 1.0f/i;
			m += (1.0f/i)*s;
			s=-s;
		}

		printf("%0.5f %0.5f\n",n,m);
		n=0,m=0;
	}
	return 0;
}	
