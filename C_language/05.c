#include <stdio.h>

int main() {

	char H[30]="Hello, World.";
	char K[30]="Kyungsung University.";
	char D[30]="Dept. of Computer Scienve.";

	printf("%s\n%s\n%s",H,H,H);
	printf("%s\n%s\n%s",K,K,K);
	printf("%s\n%s %s %s\n",D,H,K,D);

	return 0;
}

