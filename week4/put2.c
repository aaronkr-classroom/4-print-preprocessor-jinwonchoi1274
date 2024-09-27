#include <stdio.h>

#define MESSAGE "Hello world" //세미콜론 없음
int main(void) {
	//1.puts()
	puts("using puts()");
	puts(MESSAGE); //puts()는 자동 줄바꿈 있음

	//2.putchar()
	puts("\nUsing putchar():");
	for (int i = 0; MESSAGE[i] != '\0'; i++) {
		putchar(MESSAGE[i]);
	}
	putchar('\n'); //putchar() 사용할땐 줄바꿈 없음

	//3.putc()
	puts("\nUsing putc():");
	for (int i = 0; MESSAGE[i] != '\0'; i++) {
		putc(MESSAGE[i], stdout);
	}
	putc('\n', stdout);
	return 0;
}