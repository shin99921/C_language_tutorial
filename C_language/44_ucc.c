#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

void main(void){

    	int* iptr;
    	int i, j;
    	int sum=0, MAX;

	scanf("%d",&MAX);

    	iptr = (int*)calloc(MAX, sizeof(int));

    	for (i = 2; i < MAX; i++)
	{
        	if (iptr[i] == 1)
            		continue;

        	j = i;
	
        	while ((j += i) <= MAX)
		{
            		iptr[j] = 1;
        	}        
    	}

    	for (i = 2; i <= MAX; i++)
	{
        	if (iptr[i] == 0)
            	sum++;
    	}
	
	printf("%d\n",sum);

    return 0;
}
