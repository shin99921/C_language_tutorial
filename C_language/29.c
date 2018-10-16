#include <stdio.h>

int main() {

	long n,m;

	scanf("%ld %ld",&n,&m);

	for (int i=n; i <= m; i++)
	{
		printf("%ld %ld %ld\n",i,i*i,i*i*i);
	} 

	return 0;
}
