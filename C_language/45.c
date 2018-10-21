#include <stdio.h>

int main() {
	
	float A,R,W,H;
	float n=0,m=0,o=0,total=0;
	
	scanf("%f %f %f %f",&R,&A,&W,&H);
	
	if (R == 0)
		R=0.73;
	else
		R=0.6;
		
	n = A*5.14;
	m = R*W;
	o = 0.015*H;
	total = (n/m)-o;
	
	if (total < 0)
		total=0;
	
	printf("%0.5f\n",total);
	
	return 0;
}
