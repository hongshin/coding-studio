
## Programming Task 3 (Sep 18)

### Study scope
* Conditional statements
* Function and recursion
* ``scanf``

### Instruction

Solve the given four problems following the guidelines in the problem descriptions. Submit each programming result (source code files) to https://forms.gle/pioG7SvrrW5MhvDZ9 .

Find the details of the math library functions at https://www.programiz.com/c-programming/library-function/math.h .


### Problem 1

Complete function ``solve_quadratic_formula (double a, double b, double c)`` in ``quad.c``, that solves ``a`` *x*^2 + ``b`` *x* + ``c`` = 0 and produce the following results:
*  if no solution exists, print ``No solution``
*  if only one solution exist, print the solution
*  if there are two solutions, print both solutions.

```C
/* quad.c */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void solve_quadratic_formula (double a, double b, double c)
{
	/* FIXME */
}


int main () 
{
	double a, b, c ;

	scanf("%lf %lf %lf", &a, &b, &c) ;

	solve_quadratic_formula(a, b, c) ;

	return EXIT_SUCCESS ;
}
```

### Problem 2

In Chess, the queen (♛) can move to another cell in the same line or in the same row, or to another cell in a diagonal line. Complete the following program that receives a position of the queen and a position of another unit and determines whether the queen can captures the unit, or not.

A position on the chessboard is denoted as a combination of a symbol and a number, each of which represents the column and the row. This program receives four characters where the earlier twos indicates the position of the queen, and the other two the position of the other unit. It must print out "cpatured" if the queen can get to the other unit, and print out ``safe`` otherwise.

```C
/* queen.c */

#include <stdio.h>
#include <stdlib.h>

void check (char col1, char row1, char col2, char row2)
{
	/* FIXME */
}


int main () 
{
	char col1, row1, col2, row2 ;

	scanf("%c%c %c%c", &col1, &row1, &col2, &row2) ;

	check(col1, row1, col2, row2) ;

	return EXIT_SUCCESS ;
}
```
For example, when a user gives ``c7f4``, the program must print out ``captured``. When ``d6c4``, the program must print out ``safe``.

For your information, the positions in checkboards are named as follows:


![image](https://www.thechesswebsite.com/wp-content/uploads/2013/05/larsens-opening.jpg)

### Problem 3

Write a recursive functions ``factorial`` and a function ``combinatorial`` in ``combinatorial.c`` such that the program computes the *C* (*n*, *r*) = *n* ! / (*r*! x (*n - r*)!) for given ``n`` and ``r``. Note that you are not allowed to iteration (e.g., for-statement, while-statement).

```C
/* combinatorial.c */

#include <stdio.h>
#include <stdlib.h>

int factorial (int v)
{
	/* FIXME */
}
int combinatorial (int n, int r)
{
	/* FIXME */
}

int main () 
{
	int n, r ;

	scanf("%d %d", &n, &r) ;

	printf("%d\n", combinatorial(n, r)) ;

	return EXIT_SUCCESS ;
}
```

### Problem 4

Complete ``checkboard.c`` that prints out *N*-by-*N* checkboard where 'O' and 'X' are alternating. For example of *N* being 5, the program prints out the following:
```
OXOXO
XOXOX
OXOXO
XOXOX
OXOXO
```

You are asked to complete ``draw_checkboard`` and also you are allowed to new functions on your owns. Note that you must write recursive functions, and must not use iteration (e.g., for-statement). 

```C
/* checkboard.c */

#include <stdio.h>
#include <stdlib.h>

/* FIXME: you can add new functions */

void draw_checkboard (int n)
{
	/* FIXME */
}


int main () 
{
	int n ;
	scanf("%d", &n) ;

	draw_checkboard(n) ;

	return EXIT_SUCCESS ;
}
```
