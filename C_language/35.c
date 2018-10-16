#include <stdio.h>

int main() {

	double n,m,total=0;
	int i;

	scanf("%lf %lf ",&n,&m);
	scanf("%d",&i);

	for (; 0<i; i--)
	{
		n=n+(n*m);
	}
	
	printf("%0.5f\n",n);
	
	return 0;
}
