#include <stdio.h>

int B (int *arr, int size);

int main () {

	int arr[1000000];
	int cnt=0;

	while(scanf("%d",&arr[cnt]) == 1)
		cnt++;

	printf("%d\n",B(arr,cnt));

	return 0;
}

int B (int *arr, int size)
{
	int max = arr[0];

	for (int i=1; i<size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}

	return max;
}
