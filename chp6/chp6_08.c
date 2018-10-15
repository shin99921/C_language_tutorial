#include <stdio.h>

int main() {

	float n,m;
	
	while (scanf("%f %f",&n,&m) == 2)
	{
		printf("%f\n",(n-m)/(n*m));
	}
	return 0;
}
