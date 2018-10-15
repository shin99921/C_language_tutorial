#include <stdio.h>
#include <string.h>

int main() {

	char word[255];

	scanf("%s",&word);
	
	for (int i=strlen(word); 0 <= i; i--)
	{
		printf("%c",word[i]);
	}
	printf("\n");

	return 0;

}
		
