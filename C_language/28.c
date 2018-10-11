#include <stdio.h>

int main() {

	int n;
	long num,total=0;

	scanf("%d",&n);

	for (int i=0; i<n; i++)
	{
		scanf("%ld",&num);
		total+=num;
	}

	printf("%ld",total);

	return 0;

}
