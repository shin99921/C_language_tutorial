#include <stdio.h>

int main() {

	float total=0;
	float out=0;
	float num=0;
	int i=0;

	scanf("%f %f %f",&total,&num,&out);

	while (1)
	{
		if (total < 0)
		{
			printf("%d\n",i);
			break;
		}
	
		if (i > 100000)
		{
			printf("NO\n");
			break;
		}

		i++;
		total=(total-out)+(total*(0.01*num));
	}

	return 0;
}

