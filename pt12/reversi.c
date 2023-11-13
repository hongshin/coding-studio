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


/*FIXME*/

int main ()
{
	show_next_darks() ;
	return EXIT_SUCCESS ;
}
