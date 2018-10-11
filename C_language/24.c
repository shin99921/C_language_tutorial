#include <stdio.h>

int main() {

	char gan[20]="0123456789";
	char ji[20]="ABCDEFGHIJKL";
	int n;

	scanf("%d",&n);

	n+=56;

	printf("%c%c\n",ji[(n%12)],gan[(n%10)]);
	
	return 0;

}
