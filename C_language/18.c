#include <stdio.h>
const int HPM=60;

int main() {

	int im,m,h;
	
	scanf("%d",&im);

	while (im > 0)
	{
		h=im/HPM;
		m=im%HPM;

		printf("Time in minute(s): %d = %d hour(s) and %d minute(s)\n",im,h,m);
	
		scanf("%d",&im);
	}

	return 0;

}
