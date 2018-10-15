#include <stdio.h>

int main() {

	int num[8];
	int i,j;

	for (i=0; i<8; i++)
	{
		scanf("%d",&num[i]);
	}

	for (j=i-1; j>= 0; j--)
	{
		printf("%d ",num[j]);
	}
	printf("\n");

	return 0;

}
