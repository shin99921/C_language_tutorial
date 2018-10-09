#include <stdio.h>

int main() {

	char gan[11]="0123456789";
	char ji[13]="ABCDEFGHIJKL";
	int n;

	scanf("%d",&n);

	n+=56;
	n%=60;

	printf("%c%c\n",ji[(n%12)],gan[(n%10)]);

	return 0;

}
