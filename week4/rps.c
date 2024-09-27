//rps.c
//Rock-Paper-Scissors
#include<stdio.h>
#include<stdlib.h>
#include<time.h>// srand()

//상수 변수? 정의
#define ROCK 1
#define PAPER 2
#define SCISSORS 3

// 상수 함수 정의
#define WIN printf("you WIN\n")
#define LOSE printf("you LOSE\n")
#define TIE printf("IT'S A TIE\n")

void play_game(int user_choice, int com_choice);
void print_choice(int choice);

int main()
{
	int user_choice, com_choice;
	printf("welcome to Rps\n1:\"Rock\"\n2:\"Paper\"\n3:\"Scissors\"\n");
	scanf_s("%d", &user_choice);
	
	
	srand(time(0));
	com_choice =  (rand() % 3) + 1;
	printf("you choose: ");
	print_choice(user_choice);
	printf("com choose: ");
	print_choice(com_choice);
	
	
	
	play_game(user_choice, com_choice);
	
	
	
	
	
	
	return 0;
}
void play_game(int user_choice, int com_choice)
{
	if (user_choice == com_choice)
	{
		TIE;
	}
	else if ((user_choice == ROCK && com_choice == SCISSORS) || (user_choice == PAPER && com_choice == ROCK) || (user_choice == SCISSORS && com_choice == PAPER))
	{
		WIN;
	}
	else
	{
		LOSE;
	}
}
void print_choice(int choice)
{
	if (choice == ROCK)
	{
		printf("ROCK\n");
	}
	else if (choice == PAPER)
	{
		printf("PAPER\n");
	}
	else if (choice == SCISSORS)
	{
		printf("SCISSORS\n");
	}
	else
	{
		printf("Error: Incorrect choiece\n");
	}
}