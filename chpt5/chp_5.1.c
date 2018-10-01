#include <stdio.h>

const int MPH=60;

int main() {

	int min;

	scanf("%d",&min);

	while (min > 0)
	{
		printf("Time in minute(s): %d = %d hour(s) and %d minute(s)\n",min,min/MPH,min%MPH);
		scanf("%d",&min);
	}

	return 0;
}
