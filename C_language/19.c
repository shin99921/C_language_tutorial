#include <stdio.h>

int main() {

	long n,m,sum=0;
	int i;

	scanf("%ld %ld",&n,&m);
	
	i = n - m;
	
	while (i <= n + m)
	{
		sum=sum+i;
		i++;
	}

	printf("%ld",sum);

	return 0;

}
		
