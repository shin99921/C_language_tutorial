#include <stdio.h>

int main() {

	int n,i,j,sum=0;

	scanf("%d", &n);

	for(i=1; i<=n/2; i++)
	{
		if (n%i==0)
			sum++;
	}

	printf("%d\n",sum-1);
	
	return 0;

}
