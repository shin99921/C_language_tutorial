#include <stdio.h>

int main() {
	int n1,n2;

	printf("Input an integer to serve as the second operand: ");
	scanf("%d",&n2);
	
	printf("Input the first operand: ");
	scanf("%d",&n1);

	while (n1 > 0)
	{
		printf("%d %% %d = %d\n",n1,n2,n1%n2);

		printf("Input the first operand: ");
		scanf("%d",&n1);
	}

	return 0;

}
