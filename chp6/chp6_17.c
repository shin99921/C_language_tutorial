#include <stdio.h>

int main() {

	float total=1000000;
	const float out=100000;
	int i=0;

	while (1)
	{
		if (total < 0)
			break;

		i++;
		total=(total-100000)+(total*0.08);
	}
	printf("%d year\n",i);

	return 0;
}
