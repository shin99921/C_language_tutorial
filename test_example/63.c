#include <stdio.h>
#include <ctype.h>

int main() {

	char ch;
	int b=0,s=0;

	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'A' && ch <= 'Z')
			b++;
		else if (ch >= 'a' && ch <= 'z')
			s++;
	}

	printf("%d %d\n",b,s);

	return 0;
}
