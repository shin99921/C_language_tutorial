#include <stdio.h>

int main() {

	for (int i=0; i<6; i++)
	{
		for (char c='F'; 'F'-c <= i; c--)
		{
			printf("%c",c);
		}
		printf("\n");
	}

	return 0;

}
