#include <stdio.h>
#include "Logic.h"

void print_board(int board[][3])
{
	for (int i = 0; i < 3; i++)
	{
		printf("\n%i %i %i", board[i][0], board[i][1], board[i][2]);
	}
	printf("\n");
}

void plot_coordinate(int board[][3], Coordinate coordinate)
{
	if (board[coordinate.y][coordinate.x] > 0)
	{
		return;
	}
	board[coordinate.y][coordinate.x] = coordinate.player;
}

int check_status(int board[][3])
{
	int player_to_check = 0;

	// Horizontal checks
	player_to_check = (board[0][0] > 0) ? board[0][0] : 0;
	if (player_to_check != 0 && (board[0][1] == player_to_check && board[0][2] == player_to_check))
	{
		printf("\nPlayer: %i, is the winner.\n", player_to_check);
		return 0;
	}

	player_to_check = (board[1][0] > 0) ? board[1][0] : 0;
	if (player_to_check != 0 && (board[1][1] == player_to_check && board[1][2] == player_to_check))
	{
		printf("\nPlayer: %i, is the winner.\n", player_to_check);
		return 0;
	}

	player_to_check = (board[2][0] > 0) ? board[2][0] : 0;
	if (player_to_check != 0 && (board[2][1] == player_to_check && board[2][2] == player_to_check))
	{
		printf("\nPlayer: %i, is the winner.\n", player_to_check);
		return 0;
	}

	// Vertical checks
	player_to_check = (board[0][0] > 0) ? board[0][0] : 0;
	if (player_to_check != 0 && (board[1][0] == player_to_check && board[2][0] == player_to_check))
	{
		printf("\nPlayer: %i, is the winner.\n", player_to_check);
		return 0;
	}

	player_to_check = (board[0][1] > 0) ? board[0][1] : 0;
	if (player_to_check != 0 && (board[1][1] == player_to_check && board[2][1] == player_to_check))
	{
		printf("\nPlayer: %i, is the winner.\n", player_to_check);
		return 0;
	}

	player_to_check = (board[0][2] > 0) ? board[0][2] : 0;
	if (player_to_check != 0 && (board[1][2] == player_to_check && board[2][2] == player_to_check))
	{
		printf("\nPlayer: %i, is the winner.\n", player_to_check);
		return 0;
	}

	// Diagonal checks
	player_to_check = (board[0][0] > 0) ? board[0][0] : 0;
	if (player_to_check != 0 && (board[1][1] == player_to_check && board[2][2] == player_to_check))
	{
		printf("\nPlayer: %i, is the winner.\n", player_to_check);
		return 0;
	}

	player_to_check = (board[0][2] > 0) ? board[0][2] : 0;
	if (player_to_check != 0 && (board[1][1] == player_to_check && board[2][0] == player_to_check))
	{
		printf("\nPlayer: %i, is the winner.\n", player_to_check);
		return 0;
	}

	return 1;
}