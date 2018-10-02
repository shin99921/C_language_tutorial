#include <stdio.h>

int main() {

	long n,sum=0;
	long i=1;

	scanf("%ld",&n);

	while (i <= n)
	{
		sum = sum + (1000*i);
		i++;
	}

	printf("%ld",sum);

	return 0;

}
