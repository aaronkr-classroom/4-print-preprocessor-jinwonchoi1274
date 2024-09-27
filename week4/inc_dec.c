//int_dec.c
#include <stdio.h>

int main(void) {
	int x = 5;
	int y;
	int post, pre;

	printf("x:%d\n", x);
	y = x; //y는 지금 x의 값을 저장
	printf("y:%d\n", y);


	
	post = x++;
	printf("x++: %d, ++x %d\n", post, x);
	printf("x:%d\n", x);

	pre = ++y;
	
	printf("++y: %d, y++ %d\n", pre, y);
	printf("y:%d\n", y);

	if (x == y) {
		printf("x and y are eqal");
	}
	else {
		printf("x and y are not eqal");
	}
	if (x = 10) {
		printf("x is 10\n");
	}
	printf("x: %d ,y: %d", x, y);
	return 0;
}