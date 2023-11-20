#include <stdio.h>
#include <stdlib.h>


int board[8][8] = {
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 2, 1, 0, 0},
    {0, 0, 0, 0, 1, 2, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0}
};


int is_next_dark (int row, int col) 
{
	int dx[8] = {1, -1,  0,  0,  1,  1, -1, -1 } ;
	int dy[8] = {0,  0,  1, -1,  1, -1,  1, -1 } ;

	int d, i, j ;

	for (d = 0 ; d < 8 ; d++) {
		int n = 0 ;
		i = row ;
		j = col ;

		while (0 <= i && i < 8 && 0 <= j && j < 8) {
			/* FIXME */
			i = i + dx[d] ;
			j = j + dy[d] ;
		}
		if (0 <= i && i < 8 && 0 <= j && j < 8) {
			if (0 < n && board[i][j] == 1)
				return 1 ;
		}
	}

	return 0 ;
}

void show_next_darks ()
{
	int i, j ;

	for (i = 0 ; i < 8 ; i++) {
		for (j = 0 ; j < 8 ; j++) {
			if (board[i][j] == 1) {
				printf("X ") ;
			}
			else if (board[i][j] == 2) {
				printf("O ") ;
			}
			else {
				if (is_next_dark(i, j)) 
					printf("# ") ;
				else 
					printf("+ ") ;
			}
		}
		printf("\n") ;
	}
}


int main ()
{
	show_next_darks() ;
	return EXIT_SUCCESS ;
}
