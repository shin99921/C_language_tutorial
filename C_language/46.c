#include <stdio.h>

int main() {
	
	double R1,R2,R3,R4,R5;
	double total=0;
	
	scanf("%lf %lf %lf %lf %lf",&R1,&R2,&R3,&R4,&R5);
	
	total = R1+(1/((1/(R2+R3))+(1/R4)))+R5;
	
	printf("%0.5f\n",total);
	
	return 0;
}
