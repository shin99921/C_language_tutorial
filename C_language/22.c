#include <stdio.h>
#include <strings.h>

int main() {

	char name[20];
	int i=0,j=0;

	scanf("%s",&name);	
	
	while (i < strlen(name))
	{
		i++;
		printf("*%-*.*s*\n",strlen(name),i,name);
	}

	return 0;

}
