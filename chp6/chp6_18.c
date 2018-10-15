#include <stdio.h>

int main() {

	const int limit=150;
	int friends=5, week=0;

	while (friends < limit)
	{
		printf("%d week %d friends\n",week,friends);
		week++;
		friends -= week;
		friends *= 2;
	}

	return 0;

}
