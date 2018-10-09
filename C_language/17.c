#include <stdio.h>

int main() {
	const float KPM = 1.609;
	const float LPG = 3.785;
	float mt,ga,mpg,lpk;

	scanf("%f %f",&mt,&ga);
	
	mpg = mt/ga;
	lpk = 100/mpg*LPG/KPM;

	printf("%.1f mpg or %.1f liters / 100km.",mpg,lpk);

	return 0;
}
