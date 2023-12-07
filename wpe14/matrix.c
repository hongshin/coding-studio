#include <stdio.h>
#include <stdlib.h>

int find_uncovered_area (int map[5][5], int a[5][5], int area)
{
	int i, j ;
	for (i = 0 ; i < 5 ; i++) {
		for (j = 0 ; j < 5 ; j++) {
			if (map[i][j] != 0 && a[i][j] == 0) {
				a[i][j] = area ;
				return 1 ;
			}
		}
	}
	return 0 ;
}


int main ()
{
	int map[5][5] = {
		{1, 1, 1, 0, 1},
		{2, 2, 2, 0, 1},
		{1, 0, 0, 1, 1},
		{0, 2, 0, 1, 1},
		{2, 2, 2, 2, 1}
	} ;

	int a[5][5] = {
		{0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0}
	} ;

	int area = 1 ;
	while (find_uncovered_area(map, a, area)) {
		int had_a_new_one = 0 ;
		do {
			had_a_new_one = 0 ;
			for (int i = 0 ; i < 5 ; i++) {
				for (int j = 0 ; j < 5 ; j++) {
					if (a[i][j] == 0) {
						int dy[4] = {0, 0, 1, -1} ;
						int dx[4] = {1, -1, 0, 0} ;
						int d ;

						for (d = 0 ; d < 4 ; d++) {
							if (i + dy[d] < 0 || 5 <= i + dy[d])
								continue ;
							if (j + dx[d] < 0 || 5 <= j + dx[d])
								continue ;

							if (map[i + dy[d]][j + dx[d]] == map[i][j]) {
								if (a[i+dy[d]][j+dx[d]] == area) {
									a[i][j] = area ;
									had_a_new_one = 1 ;
								}
							}
						}
					}
				}
			}
		} while (had_a_new_one) ;
		area++ ;
	}

	for (int i = 0 ; i < 5 ; i++) {
		for (int j = 0 ; j < 5 ; j++) {
			printf("%d ", a[i][j]) ;
		}
		printf("\n") ;
	}

	return EXIT_SUCCESS ;
}
