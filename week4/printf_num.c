//print_num
#include <stdio.h>

int main(void) {
	int small = 7,
		mid = 147,
		big = 77441;

	printf("[%5d] [%05d] [%-5d] [%-05d]\n", small, small, small);
	printf("[%5d] [%05d] [%-5d] [%+05d]\n", mid, mid, mid);
	printf("[%5d] [%05d] [%-5d]	[%-05d]\n", big, big, big);

	return 0;
}