#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {

	int int_overflow;
	int MAX_INTEGER = INT_MAX;
	float flt_overflow,flt_underflow;
	float MIN_FLOAT = FLT_MIN;
	float MAX_FLOAT = FLT_MAX;

	int_overflow = INT_MAX+1;
	flt_overflow = FLT_MAX+1;
	flt_underflow = FLT_MIN-1;

	printf("MAX integer: %d \tMAX integer+1: %d\n", INT_MAX,int_overflow);
	printf("MAX float: %f \tMAX float+1: %f\n", FLT_MAX,flt_overflow);
	printf("MIN float: %f \tMIN float-1: %f\n", FLT_MIN,flt_underflow);

	return 0;
}
