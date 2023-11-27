#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE * fniv = NULL ;

typedef 
	struct {
		char book[4] ;
		int chapnum ;
		int versenum ;
		char text[512] ;
	}
	verse_t ;

int read_a_line (char * s)
{
	int i = 0 ;
	char c ;
	do {
		c = getc(fniv) ;
		if (c != '\n' && c != EOF) {
			s[i] = c ;
			i++ ;
		}
	} while (c != '\n' && c != EOF) ;
	s[i] = '\0' ;

	if (i == 0 && c == EOF)
		return 0 ;
	return 1 ;
}

void str_to_verse (char * s, verse_t * v) {
	/*FIXME*/
}

void print_verse (verse_t v)
{
	/*FIXME*/
}

int is_verse_matched (verse_t v, char * argv[])
{
	/*FIXME*/
}

int main (int argc, char * argv[])
{
	if (argc != 4) {
		printf("Wrong number of arguments") ;
		return EXIT_FAILURE ;
	}


	fniv = fopen("NIV.txt", "r") ;
	if (fniv == NULL) {
		printf("Fails to open NIV.txt\n") ;
		return EXIT_FAILURE ;
	}

	char line[2048] ;

	while (read_a_line(line)) {
		verse_t v ;
		str_to_verse(line, &v) ;
		if (is_verse_matched(v, argv)
			print_verse(v) ;
	}

	fclose(fniv) ;
	
	return EXIT_FAILURE ;
}
