#pragma once

typedef struct
{
	int player;
	int x, y;
} Coordinate;

void print_board(int board[][3]);
void plot_coordinate(int board[][3], Coordinate coordinate);
int check_status(int board[][3]);