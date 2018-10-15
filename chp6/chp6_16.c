#include <stdio.h>

int main() {

	float n=100,m=100;
	int i=0;

	while (1)
	{
		if (n<m)
			break;
		i++;
		n=n+10;
		m=m+(m*0.05);
	}
	printf("%d year,%f %f\n",i,n,m);
	return 0;
}
