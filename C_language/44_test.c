#include <stdio.h>

int main() {

	int num;
	int i,t,r;
	int sum=0;
	scanf("%d",&num);
	int so[num+1];

	for (i=1; num>=i; i++) 
	{
		so[i]=1;
	}

	for (r=2; r<=1000; r++)
	{
		for (t=r*2; t<=num; t+=r)
		{
			so[t]=0;
		}
	}
	
	for (i=1; i<=num; i++)
	{
		if (so[i]==1)
		{
			sum++;
		}
	}

	printf("%d\n",sum-1);

	return 0;
}
