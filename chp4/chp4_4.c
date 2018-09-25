#include <stdio.h>

int main() {

	const float IPF = 12;
	float height;
	char name[40];

	printf("What is your name?: ");
	scanf("%s",&name);
	printf("What is your height in inches?: ");
	scanf("%f",&height);
	printf("%s, you are %.3f feet tall.\n",name,height/IPF);

	return 0;
}
