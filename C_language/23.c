#include <stdio.h>

int main() {

	int H,W,N;

	scanf("%d %d %d",&H,&W,&N);

	printf("%d\n",((N%H)*100)+(N/H+1));

	return 0;

}
