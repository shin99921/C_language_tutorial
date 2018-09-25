#include <stdio.h>
#include <string.h>

int main() {
	char fname[20];
	char sname[20];

	scanf("%s %s",&fname,&sname);
	printf("%s %s\n",fname,sname);
	printf("%*d %*d\n",strlen(fname),strlen(fname),strlen(sname),strlen(sname));
	printf("%s %s\n",fname,sname);
	printf("%-*d %-*d\n",strlen(fname),strlen(fname),strlen(sname),strlen(sname));

	return 0;
}
