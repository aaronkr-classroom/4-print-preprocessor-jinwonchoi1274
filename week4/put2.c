#include <stdio.h>

#define MESSAGE "Hello world" //�����ݷ� ����
int main(void) {
	//1.puts()
	puts("using puts()");
	puts(MESSAGE); //puts()�� �ڵ� �ٹٲ� ����

	//2.putchar()
	puts("\nUsing putchar():");
	for (int i = 0; MESSAGE[i] != '\0'; i++) {
		putchar(MESSAGE[i]);
	}
	putchar('\n'); //putchar() ����Ҷ� �ٹٲ� ����

	//3.putc()
	puts("\nUsing putc():");
	for (int i = 0; MESSAGE[i] != '\0'; i++) {
		putc(MESSAGE[i], stdout);
	}
	putc('\n', stdout);
	return 0;
}