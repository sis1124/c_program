/*
	documentation:

	tic tac toe is a paper-and-pencil game for two players.
	X and O, who take turns marking the spaces in a 3×3 grid.
	The player who succeeds in placing three of their
	marks in a horizontal, vertical, or diagonal row is the winner.
*/
#include <stdio.h>
#include <conio.h>

char box[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

void creating_board()
{
	//print tic tac toe board
	printf("\n\n");
	printf("player 1: X\nplayer 2: 0\n");
	printf("\t\t\t   |   |   \n");
	printf("\t\t\t %c | %c | %c \n", box[1], box[2], box[3]);
	printf("\t\t\t___|___|___\n");
	printf("\t\t\t   |   |   \n");
	printf("\t\t\t %c | %c | %c \n", box[4], box[5], box[6]);
	printf("\t\t\t___|___|___\n");
	printf("\t\t\t   |   |   \n");
	printf("\t\t\t %c | %c | %c \n", box[7], box[8], box[9]);
	printf("\t\t\t   |   |   \n");
}
void marking_board(int choice, char mark)
{
	//marking player move
	if(choice == 1 && box[1] == '1') {
		box[1] = mark;
	}
	else if(choice == 2 && box[2] == '2') {
		box[2] = mark;
	}
	else if(choice == 3 && box[3] == '3') {
		box[3] = mark;
	}
	else if(choice == 4 && box[4] == '4') {
		box[4] = mark;
	}
	else if(choice == 5 && box[5] == '5') {
		box[5] = mark;
	}
	else if(choice == 6 && box[6] == '6') {
		box[6] = mark;
	}
	else if(choice == 7 && box[7] == '7') {
		box[7] = mark;
	}
	else if(choice == 8 && box[8] == '8') {
		box[8] = mark;
	}
	else if(choice == 9 && box[9] == '9') {
		box[9] = mark;
	}
	else{
		printf("Invalid Move\n");
	}
}
int check_for_win()
{
	//horizontal match
	if(box[1] == box[2] && box[2] == box[3]) {
		return 1;
	}
	else if(box[4] == box[5] && box[5] == box[6]) {
		return 1;
	}
	else if(box[7] == box[8] && box[8] == box[9]) {
		return 1;
	}
	//vertical match
	else if(box[1] == box[4] && box[4] == box[7]) {
		return 1;
	}
	else if(box[2] == box[5] && box[5] == box[8]) {
		return 1;
	}
	else if(box[3] == box[6] && box[6] == box[9]) {
		return 1;
	}
	//diagonal match
	else if(box[1] == box[5] && box[5] == box[9]) {
		return 1;
	}
	else if(box[3] == box[5] && box[5] == box[7]) {
		return 1;
	}
	//not match
	else if(box[1] != '1' && box[2] != '2' && box[3] != '3' && box[4] != '4' && box[5] != '5' && box[6] != '6' && box[7] != '7' && box[8] != '8' && box[9] != '9') {
		return 0;
	}
	else{
		return -1;
	}
}
int main()
{
	int choice, player, i;
	char mark;

	player = 1;

	do {
		creating_board();

		player = (player % 2) ? 1 : 2;
		printf("\nplayer %d trun, enter position: ", player);
		scanf("%d", &choice);

		mark = (player++ % 2 == 1) ? 'X' : '0';
		marking_board(choice, mark);

		system("cls");

		i = check_for_win();

	} while(i == -1);

	//check for win
	if(i == 1) {
		printf("player %d, you have won the game!", --player);
	}
	else{
		printf("<-----DRAW----->");
	}
	getch();
	return 0;
}
