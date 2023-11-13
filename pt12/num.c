#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef 
	struct {
		char word[128] ;
		int value ;
	}
	word_t ;

word_t words[29] = { 
	{"one", 1}, 
	{"two", 2},
	{"three", 3},
	{"four", 4},
	{"five", 5},
	{"six", 6},
	{"seven", 7},
	{"eight", 8},
	{"nine", 9},
	{"ten", 10},
	{"eleven", 11},
	{"twelve", 12},
	{"thirteen", 13},
	{"fourteen", 14},
	{"fifteen", 15},
	{"sixteen", 16},
	{"seventeen", 17},
	{"eighteen", 18},
	{"nineteen", 19},
	{"twenty", 20},
	{"thirty", 30},
	{"fourty", 40},
	{"fifthy", 50},
	{"sixty", 60},
	{"seventy", 70},
	{"eighty", 80},
	{"ninety", 90}
}
	;


/*FIXME*/

int main ()
{
	/*FIXME*/

	return EXIT_SUCCESS ;
}
