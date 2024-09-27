//rps.c
//rock_paper_scissors
#include <stdio.h>
#include <stdio.h>
#include <time.h>	//srand()

#define ROCK 1
#define PAPER 2
#define SCISSORS 3

//��� �Լ� ����
#define WIN printf("you win!\n")
#define LOSE printf("you lose �Ф�\n")
#define TIE printf("it's a tie~~~\n")

//�Լ� ���� ����
void play_game(int user_choice, int comp_choice);
void print_choice(int choice);

int main(void) {
	int user_choice, comp_choice;

	srand(time(0));

	printf("Welcome to RPS!\n");
	printf("Choose your move:\n");
	printf("1 - Rock\n");
	printf("2 - Paper\n");
	printf("3 - Scissors\n");

	//������� ���� �ޱ�
	printf("Choice >>> ");
	scanf_s("%d", &user_choice);

	//ai�� ���� �ޱ�
	comp_choice = (rand() & 3) + 1; //(0~2) +1

	printf("Your choice: ");
	print_choice(user_choice);
	printf("AI choice: ");
	print_choice(comp_choice);

	
	play_game(user_choice, comp_choice);
	

	return 0;
}

//�Լ� ����
void play_game(int user_choice, int comp_choice) {
	if (user_choice == comp_choice) {
		TIE;
	}
	else if (
		(user_choice == ROCK && comp_choice == SCISSORS) ||
		(user_choice == PAPER && comp_choice == ROCK) ||
		(user_choice == SCISSORS && comp_choice == PAPER)
		) {
		WIN;
	}
	else {
		LOSE;
	}
}

void print_choice(int choice) {
	if (choice == ROCK) {
		printf("Rock\n");
	}
	else if (choice == PAPER) {
		printf("Paper\n");
	}
	else if (choice == SCISSORS) {
		printf("Scissors\n\n");
	}
	else {
		printf("Error: Incorrect choice!");
	}
}