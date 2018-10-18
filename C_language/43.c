#include <stdio.h>

int IsPrimeNumber(int n);


int main(void)
{
    int n,sum=0;
    int i = 0;

    scanf("%d",&n);
    
    for (i = 1; i <= n; i++) 
    {
        if (IsPrimeNumber(i)) 
        {
            sum++;
        }
    }
    printf("%d\n",sum);
    return 0;
}

int IsPrimeNumber(int n) 
{
    int i = 0;
    int last = n / 2;  
    if (n <= 1)
    {
        return 0;
    }
                        
    for (i = 2; i <= last; i++) 
    {
        if ((n%i) == 0)
        {
            return 0; 
        }
    }
    return 1; 
}
