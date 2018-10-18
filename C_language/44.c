#include <stdio.h>

double sqrt(double num)
{
	double next;
	double temp;

	next=0.5*(1+(num/1));

	while (1)
	{
		temp=next;
		next=0.5 * (next+(num/next));

		if (temp-next<0.005 || temp-next<-0.005)
			break;
	}

	return next;
}


int check_prime(int n) {

    	int sqr = (int) sqrt(n);

    	for (int i = 2; i <= sqr; i++)
	{	
        	if (n % i == 0)
		{
            		return 0;
		}
		
	}

    	return 1;
}


int main()
{
    	int N, cnt = 0;

    	scanf("%d", &N);

    	for (int i = 1; i < N; i+=2)
    	{
        	if (check_prime(i))
            		cnt++;
    	}

    	printf("%d\n",cnt);

    	return 0;
}
