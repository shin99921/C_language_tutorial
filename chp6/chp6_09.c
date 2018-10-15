#include <stdio.h>

float cal(float n, float m);

int main() {

	float n,m;

	while (scanf("%f %f",&n,&m) == 2)
	{
		printf("%f\n",cal(n,m));
	}
	
	return 0;
}

float cal (float n, float m)
{
	return (n-m)/(n*m);
}
