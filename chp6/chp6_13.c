#include <stdio.h>

int main() {

	int num[8];
	int power = 1;
	int i;

	for (int i=0; i < 8; i++)
	{
		power *= 2;
		num[i]=power;
	}
	
	i=0;

	do {
		printf("%d ",num[i]);
		i++;
	} while (i < 8);

	printf("\n");

	return 0;

}
