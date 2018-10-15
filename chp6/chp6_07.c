#include <stdio.h>
#include <string.h>

int main() {

	char word[30];

	scanf("%s",&word);

	for (int i=strlen(word); i >= 0; i--)
	{
		printf("%c",word[i]);
	}
	printf("\n");

	return 0;

}
