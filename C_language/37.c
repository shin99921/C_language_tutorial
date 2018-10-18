#include <stdio.h>
#define STOP '#'

int main() {

	char ch;
	unsigned int spaces = 0, newlines = 0, other = 0;

	while ((ch = getchar()) != STOP)
	{
		if (ch ==' ')
			spaces++;
		else if (ch == '\n')
			newlines++;
		else
			other++;
	}
	printf("\n");

	printf("%u %u %u\n",spaces, newlines, other);

	return 0;
}
