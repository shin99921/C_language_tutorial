#include <stdio.h>

int main () {
	float speed,filesize,download;
	scanf("%f %f",&speed,&filesize);
	speed = speed/8;
	download = (filesize/speed);
	printf("%.2fsec",download);

	return 0;
}
