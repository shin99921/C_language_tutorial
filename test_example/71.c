#include <stdio.h>

void to_base_n (long long n, int m);

int main() {
	
	long long n;
	int m;
	
	scanf("%lld %d",&n,&m);
	
	to_base_n(n,m);
	
	return 0;
}

void to_base_n (long long n, int m)
{
	if (n == 0)
		return;
		
	to_base_n (n/m,m);
	
	printf("%lld",n%m);
}
