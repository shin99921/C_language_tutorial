#include <stdio.h>
#include <ctype.h>
#define STOP 0

int main() {
	
	long even_count = 0, even_sum = 0, odd_count = 0, odd_sum = 0;
	double even_avg, odd_avg;
	long input;

	while (scanf("%ld",&input) == 1 && input != STOP)
	{
		if (input % 2 == 0)
		{
			even_count++;
			even_sum += input;
		}
		
		else
		{
			odd_count++;
			odd_sum += input;
		}
	}

	even_avg = even_sum / (double) even_count;
	odd_avg = odd_sum / (double) odd_count;

	if (even_count == 0)
        {
                printf("%ld %0.2f %ld %0.2f\n",even_count,0.0,odd_count,odd_avg);
        }

        else if (odd_count == 0)
        {
                printf("%ld %0.2f %ld %0.2f\n",even_count,even_avg,odd_count,0.0);
        }

	else if (even_count == 0 && odd_count == 0)
	{
		printf("%ld %0.2f %ld %0.2f\n",even_count,0.0,odd_count,0.0);
	}

	else
	{
		printf("%ld %0.2f %ld %0.2f\n",even_count,even_avg,odd_count,odd_avg);
	}

	return 0;

}
