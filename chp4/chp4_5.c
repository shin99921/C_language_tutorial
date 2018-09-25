#include <stdio.h>

int main() {

	const float BPB = 8;
	float ds,fs;

	printf("Input download speed (in magabits/second): ");
	scanf("%f",&ds);
	printf("Input file size: ");
	scanf("%f",&fs);
	printf("Donwload speed-%.2f ,File siez-%.2f ,this file can be download in %.2f second.",ds,fs,(fs*BPB)/ds);

	return 0;
}
