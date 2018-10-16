#include <stdio.h>

int main() {

	float n,m;
	
	while (scanf("%f %f",&n,&m) == 2)
	{
		printf("%0.3f\n",(n-m)/(n*m));
	}
	return 0;
}
