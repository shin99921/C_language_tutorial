#include <stdio.h>

void print_space(int n);

int main(void)
{
	char ch;
	char c1, c2;
	
	scanf("%c",&ch);
	
	for(c1 = 'A'; c1 <= ch; c1++)
	{

		print_space(ch - c1);

		for (c2 = 'A'; c2 < c1; c2++)
		{
			printf("%c", c2);

		}
		
		for (; 'A' <= c2; c2--)
		{
			printf("%c", c2);
		}

		printf("\n");
	}

	return 0;
}

void print_space(int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("-");
	}
}
