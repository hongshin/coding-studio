#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef 
	struct {
		char word[128] ;
		int value ;
	}
	word_t ;

word_t words[27] = { 
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
} ;



/*FIXME*/

int str_len (char s[])
{
	int len = 0 ;
	while (s[len] != '\0') {
		len++ ;
	}
	return len ;
https://forms.gle/toeAsMkekwL75WyK9}


int match (char l[], int i, char w[])
{
	int len = str_len(w) ;
	int j ;

	for (j = 0 ; j < len ; j++) {
		if (l[i + j] != w[j]) 
			break ;
	}
	if (j == len) {
		return 1 ;
	}
	return 0 ;
}


int main ()
{
	char line[1024] = "There are four apples and two oranges" ;
	int line_len = str_len(line) ;

	//printf("%d %d\n", match(line, 10, words[3].word), match(line, 10, words[2].word)) ;

	
	int i, j ;
	for (i = 0 ; i < line_len ; i++) {
	
		for (j = 0 ; j < 27 ; j++) {
			if (match(line, i, words[j].word)) {
				printf("%d", words[j].value) ;
				i = i + str_len(words[j].word) - 1 ;
				break ;
			}
		}
		if (j == 27) {
			printf("%c", line[i]) ;		
		}
	}
	
	return EXIT_SUCCESS ;
}
