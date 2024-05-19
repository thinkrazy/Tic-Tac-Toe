#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Logic.h"

int main(int argc, char* argv[])
{
	// Console Title
	system("title Tic-Tac-Toe");

	int board[][3] = {
		{0, 0, 0},
		{0, 0, 0},
		{0, 0, 0}
	};
	int game_iteration = 1;

	Coordinate coordinate;
	coordinate.player = 1;
	coordinate.x = 0, coordinate.y = 0;
	
	while (true)
	{
		system("cls");

		print_board(board);
		coordinate.player = (game_iteration % 2 == 0) ? 2 : 1;

		printf("\nCoordinate x: ");
		scanf_s(" %i", &coordinate.x);
		coordinate.x--;

		printf("\nCoordinate y: ");
		scanf_s(" %i", &coordinate.y);
		coordinate.y--;

		plot_coordinate(board, coordinate);

		system("cls");
		if (check_status(board) == 0)
		{
			print_board(board);
			break;
		}

		game_iteration++;
	}

	printf("\n");
	system("pause");

	return 0;
}