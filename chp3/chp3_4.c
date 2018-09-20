#include <stdio.h>

int main() {
	float a;
	
	scanf("%f",&a);
	printf("고정소수점 표기: %f\n",a);
	printf("지수 표기: %e\n",a);
	printf("p 표기: %a\n",a);

	return 0;
}
