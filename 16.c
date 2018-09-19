#include <stdio.h>
#include <strings.h>

int main () {
	char fn[30];
	char sn[30];
	
	scanf("%s %s",fn,sn);
	printf("%s %s\n",fn,sn);
	printf("%*d %*d\n",strlen(fn),strlen(fn),strlen(sn),strlen(sn));
	printf("%s %s\n",fn,sn);
	printf("%-*d %-d\n",strlen(fn),strlen(fn),strlen(sn),strlen(sn));

	return 0;
}
