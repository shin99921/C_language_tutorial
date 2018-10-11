#include <stdio.h>

int main() {
	
	char eng[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int n,m;

	scanf("%d",&n);

	for (int i=0; i<n; ++i)
	{
		for (int j=0; j<=i; ++j)
		{
			m=n-j-1;
			printf("%c",eng[m]);
		}
		printf("\n");
	}

	return 0;
}
