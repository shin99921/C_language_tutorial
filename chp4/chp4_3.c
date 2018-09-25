#include <stdio.h>

int main() {

	float n;
	
	printf("input num:");
	scanf("%f",&n);
	printf("The input is %.1f or %.1e\n",n,n);
	printf("The input is %+.3f or %.3E\n",n,n);

	return 0;
}
