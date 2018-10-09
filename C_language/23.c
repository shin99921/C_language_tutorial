#include <stdio.h>

int main() {

	int H,W,N;

	scanf("%d %d %d",&H,&W,&N);
	
	if (N%H == 0)
	{
		printf("%d",(H*100)+(N/H));
	}
		
	else
	{
		printf("%d\n",((N%H)*100)+(N/H+1));
	}

	return 0;

}
