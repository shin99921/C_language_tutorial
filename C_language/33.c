#include <stdio.h>

int main() {

	int i,j,n;

	scanf("%d",&n);

	int num[n];

	for (i=0; i<n; i++)
	{
		scanf("%d",&num[i]);
	}

	for (j=i-1; j >= 0; j--)
	{
		printf("%d ",num[j]);
	}

	printf("\n");

	return 0;

}
