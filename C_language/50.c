#include <stdio.h>

int main() {
	int n;
	double sal,tax=0;
	
	scanf("%d %lf",&n,&sal);
	
	if (n == 1)
	{
		if (sal>17850)
			tax = (0.15*17850)+(0.28*(sal-17850));
		else
			tax = (0.15*sal);
	}
	else if (n == 2)
	{
		if (sal>23900)
			tax = (0.15*23900)+(0.28*(sal-23900));
		else
			tax = (0.15*sal);
	}
	else if (n == 3)
	{
		if (sal>29750)
			tax = (0.15*29750)+(0.28*(sal-29750));
		else
			tax = (0.15*sal);
	}
	else if (n == 4)
	{
		if (sal>14875)
			tax = (0.15*14875)+(0.28*(sal-14875));
		else
			tax = (0.15*sal);
	}
	else
		return 0;
		
	printf("%0.2f\n",tax);
	
	return 0;
}
