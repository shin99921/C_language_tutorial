#include <stdio.h>

const int WPD=7;

int main() {

	int day;

	scanf("%d",&day);

	while (day > 0)
	{
		printf("%d days are %d weeks, %d days.\n",day,day/WPD,day%WPD);
		scanf("%d",&day);
	}

	return 0;

}
