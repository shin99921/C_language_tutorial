#include <stdio.h>

int main() {

	int n,m;
	int i;
	int gcd=0;

	scanf("%d %d",&n,&m);

	for (i=1; i<=m; i++)
	{
		if (m%i==0 && n%i==0)
		{
			gcd=i;
		}
	}

	printf("%d\n",gcd);

	return 0;
}
