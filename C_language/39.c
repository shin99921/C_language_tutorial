#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#define STOP '#'

int main() {
	char ch;
	unsigned int ei_count = 0;
	bool e_flag = false;

	while ((ch = getchar()) != STOP)
	{
		
		
		if (ch == 'e')
			e_flag = true;
		
		else if (ch == 'i')
		{
			if (e_flag)
				ei_count++;
			e_flag = false;
		}
	
		else
			e_flag = false;
	}

	printf("%u\n",ei_count);

	return 0;
}
