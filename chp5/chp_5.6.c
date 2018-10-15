#include <stdio.h>

int main() {

        int n,num,sum;
        int i=0;

        scanf("%d",&n);

        num = n;

        while (i < num)
        {
                i++;
                sum+=i*i;
                printf("%d\n",sum);
        }

        printf("total: %d\n",sum);

        return 0;

}

