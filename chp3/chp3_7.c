#include <stdio.h>

int main() {
	float intocm,inch = 2.54;
	int n;
	
	printf("please input inch:");
	scanf("%d",&n);
	intocm = n*inch;
	printf("%d inch is %fcm\n",n,intocm);

	return 0;
}
