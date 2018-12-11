#include <stdio.h>

unsigned long long F (int n);

int main () {
	
	int n;
	
	while (scanf("%d",&n) == 1 && n >= 0 )
		printf("%#d: %llu\n",n,F(n));
		
	return 0;
}

unsigned long long F (int n)
{
	unsigned long long tmp=0,f=1,o=1,c=3;
	
	if (n == 0)
		return 0;
	
	else if (n == 1)
		return 1;
		
	else
		while (c <= n)
		{
			tmp = o;
			o += f;
			f = tmp;
			c++;
		}
	
	return o;
}
