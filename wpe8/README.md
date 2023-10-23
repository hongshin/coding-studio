# Weekly Programming Exercise 8 (Oct. 23, 2023)

### Study scope
* 1-d array and 2-d array
* Passing array to functions
* String

### Problem 1 ###

Write a program ``unique.c`` that receives 20 integers from the user, and then prints out all appearing numbers uniquely.

### Problem 2 ###

Write a program ``freq.c`` that receives 20 integers from the user, and then prints out most frequently appearing numbers. Prints out all of them if multiple ones exist.

### Problem 3 ###

Complete the ``int is_substr (char s1[], char s2[])`` function in ``substr.c``, which determines whether ``s2`` is a substring of ``s2`` (i.e., ``s1`` is a part of ``s2``).

Note that you are not allowed to use any string library function.

```C
#include <stdio.h>
#include <stdlib.h>

int is_substr (char s1[], char s2[])
{
	/*FIXME*/
}

int main ()
{
	if (is_substr("Computer", "put")) {
		printf("True") ;
	}
	else {
		printf("False") ;
	}

	if (is_substr("Science", "ei")) {
		printf("True") ;
	}
	else {
		printf("False") ;
	}

	return EXIT_SUCCESS ;
}
```

subsequence

### Problem 4 ###

Add a function ``shrink_str`` to ``shring.c`` that receives a string and updates the string by removing all whitespaces ``' '``.

```C
#include <stdio.h>
#include <stdlib.h>

//FIXME

int main ()
{
	char s[10] = "Hello, world ! !" ;

	shrink_str(s) ;

	printf("%s", s) ; //it will print out "Hello,world! !".

	return EXIT_SUCCESS ;
}
```


### Problem 5 ###

Fill in the body of function ``int is_magic_square (int a[][3])`` that determines whether array ``a`` is a 3-by-3 magic square (i.e., every sum of a column, row, and diagonal is the same).

```C
/* magic.c */

#include <stdio.h>
#include <stdlib.h>

int is_magic_square (int a[][3]) 
{
	/*FIXME*/
}

int main ()
{
	int b[3][3] = {
		{2, 7, 6}, 
		{9, 5, 1}, 
		{4, 3, 8} } ;

	if (is_magic_square(b)) {
		printf("True") ;
	}
	else {
		printf("False") ;
	}

	return EXIT_SUCCESS ;
}
```

### Problem 6 ###

In ``tiktaktoe.c``, the ``board`` array represents the status of the tik-tak-toe game board: 0 indicates that the cell is empty, 1 indicates Player 1's, and 2 indicates Player 2's.

Fill in the code at ``/*FIXME*/`` that determines the winner if exists, by updating the ``winner`` variable.


```C
#include <stdio.h>
#include <stdlib.h>


int main ()
{
	int board[3][3] = {{0, 1, 2}, {0, 1, 0}, {2, 1, 2}} ;
	int winner = 0 ;

	/*FIXME*/

	if (winner == 0) {
		printf("No winner.\n") ;
	}
	else if (winner == 1) {
		printf("Player 1\n") ;
	}
	else if (winner == 2) {
		printf("Player 2\n") ;
	}
	else {
		printf("No joke.\n") ;
	}

	return EXIT_SUCCESS ;
}
```

