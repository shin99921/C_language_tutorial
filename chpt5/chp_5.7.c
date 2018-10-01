#include <stdio.h>

float func(float n) {
	return n*n*n;
}

int main() {

	float num;

	scanf("%f",&num);

	printf("%f\n",func(num));

	return 0;

}
