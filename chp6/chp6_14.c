#include <stdio.h>

int main() {

	int a1[8],a2[8];
	int sum=0;

	for (int i=0; i < 8; i++)
	{
		scanf("%d",&a1[i]);
		sum += a1[i];
		a2[i] = sum;
	}

	for (int i=0; i < 8; i++)
	{
		printf("%d ",a1[i]);
	}
	printf("\n");

	for (int i=0; i < 8; i++)
	{
		printf("%d ",a2[i]);
	}
	printf("\n");

	return 0;
}
