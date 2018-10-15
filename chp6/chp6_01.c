#include <stdio.h>
#include <string.h>

int main() {

	char alphabet[26]="abcdefghijklmnopqrstuvwxyz";

	for (int i=0; i < strlen(alphabet); i++)
	{
		printf("%c ",alphabet[i]);
	}
	return 0;

}
