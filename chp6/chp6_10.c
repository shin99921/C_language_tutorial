#include <stdio.h>

int main() {

	int n,m,total=0;

	while (1)
	{
		scanf("%d %d",&n,&m);

		if (n>=m)
			break;

		for (int i=n; i <= m; i++)
		{
			total+=i*i;
		}

		printf("%d~%d %d\n",n*n,m*m,total);
		total=0;
	}

	return 0;
}
