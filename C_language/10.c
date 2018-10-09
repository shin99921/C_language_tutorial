#include <stdio.h>

int main() {
	float a = 3.0e-23;
	float b,c;
	
	scanf("%f",&b);
	c=b*950/a;
	
	printf("%e\n",c);
	
	return 0;
}
