#include <stdio.h>

int main() {
	float wat = 3.0e-23;
	int n,quart = 950;
	float total;

	scanf("%d",&n);
	quart = n*quart;
	total = quart/wat;
	
	printf("%e",total);

	return 0;

}
