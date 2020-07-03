/*
	documentation:

	Zero21 Solitaire. Zero21 is a challenging game with a simple rule:
	Try to stay between 0 and 21.
	Zero21 Solitaire is a fun numbers game with solitaire
	flavor to relax and unwind while keeping your mind sharp.
*/
#include <stdio.h>
#include <time.h>

void main_menu()
{
	printf("welcome to Zero21 Solitaire\n\n");
	printf("1. Start Game\n");
	printf("2. Help\n");
	printf("3. Exit\n");
	printf(">> ");
}
void help()
{
	printf("help -\n\n");
	printf("Zero21 Solitaire. Zero21 is a challenging game with a simple rule:\nTry to stay between 0 and 21.\nZero21 Solitaire is a fun numbers game with solitaire flavor to relax and unwind while keeping your mind sharp.\n");
	printf("press a or b to play the game\n");
}
void start_game()
{
	int main_score, right_score, left_score;
	char chosen_number;

	main_score = 0;

	while(1) {
		time_t t;
		srand(time(&t));

		right_score = (rand() % 21) - 5;
		left_score = (rand() % 21) - 10;

		printf("Your Score >> %d\n\n", main_score);
		printf("a - (%d)\t\tb - (%d)\n>> ", right_score, left_score);

		scanf(" %c", &chosen_number);

		if(chosen_number == 'a') {
			main_score += right_score;
		}
		else if(chosen_number == 'b') {
			main_score += left_score;
		}

		if(main_score < 0 || main_score > 22) {
			printf("You Lose! Try Again\n");
			break;
		}
	}
}
int main()
{
	int option;

	main_menu();
	scanf("%d", &option);
	if(option == 1) {
		start_game();
	}
	if(option == 2) {
		help();
	}
	getchar();
	getchar();
	return 0;
}
