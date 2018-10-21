#include <stdio.h>
#include <string.h>

int main() {
	char word[100];
	int K,i;
	
	scanf("%d\n",&K);
	fgets(word, 100, stdin);
	
	K*=-1;
	
	for (i=0; i<strlen(word); i++)
	{
		if (word[i] >= 'A' && word[i] <= 'Z')
		{
			word[i]-='A';
			if (word[i]+K<0)
			{
				word[i]+=26;
			}
			word[i]=(word[i]+K)%26;
			word[i]+='A';
		}
	}
	
	printf("%s\n",word);
	
	return 0;
}
