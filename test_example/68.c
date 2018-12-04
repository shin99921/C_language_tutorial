#include <stdio.h>

void com (double *a, double *b, double *c);

int main() {

	double a,b,c;

	while (scanf("%lf %lf %lf",&a,&b,&c))
	{
		com (&a,&b,&c);
		printf("%f %f %f\n",a,b,c);
	}

	return 0;
}

void com (double *a, double *b, double *c)
{
	double tmp;

	if (*a >*b)
	{
		tmp=*b;
		*b=*a;
		*a=tmp;
	}

	if (*b > *c)
	{
		tmp=*c;
		*c=*b;
		*b=tmp;

		if (*a > *b)
		{
			tmp=*b;
			*b=*a;
			*a=tmp;
		}
	}
}
