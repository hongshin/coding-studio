## Weekly Programming Exercise (14 Sep 2023)

### Study Scope
* Conditional statements
* Function
* Recursive function
* Scanf

### Problem 1 ###

Write a function ``print_in_order`` that takes three integer numbers as function arguments, and then prints the numbers in ascending order.

```C
#include <stdio.h>
#include <stdlib.h>

void print_in_order (int a, int b, int c)
{
	/* FIXME */
}

int main () {

	print_in_order(12, 3, 7) ;
	print_in_order(6, 9, 2) ;

	return EXIT_SUCCESS ;
}
```


For this program, the expected output is as follows:
```
3 7 12
2 6 9
```


### Problem 2 ###

Write a function ``check_overlap`` that receives two ranges and 
prints ``Overlapped`` if the two overlap, and prints ``Not overlapped`` otherwise. 
A range is given by the two boundary values inclusively (e.g., a pair of ``b11`` and ``b12``, a pair of ``b21`` and ``b22``). Note that there is no assumption that the values come earlier is less than the values come later.

```C
#include <stdio.h>
#include <stdlib.h>

void check_overlap (int b11, int b12, int b21, int b22)
{
	/* FIXME */
}

int main () 
{
	check_overlap(2, 10, 8, 7) ;
	check_overlap(15, 6, 12, 20) ;
	check_overlap(5, 8, 17, 10) ;

	return EXIT_SUCCESS ;
}
```

For this program, the expected result is as follows:
```
Overlapped
Overlapped
Not overlapped
```


### Problem 3. 

Write a function ``count_day`` that returns the number of days between Jan 1 (1/1) and a given day (``month``/``day``) in a year. Assume that Feburary has 28 days.

```C
#include <stdio.h>
#include <stdlib.h>

int num_days (int month, int day)
{
	/* FIXME */
}

int main () 
{
	printf("%d\n", num_day(12, 25)) ;
	printf("%d\n", num_day(9, 14)) ;
	printf("%d\n", num_day(5, 5)) ;

	return EXIT_SUCCESS ;
}
```

### Problem 4
Write a function ``print_moves`` that receives the current position of a knight on a chessboard, and prints out all possible moves. A position of a knight is given as a pair of a column numberin ``a`` and ``h`` and a row number in ``1`` and ``8``.

![image](https://www.thechesswebsite.com/wp-content/uploads/2013/05/larsens-opening.jpg)

```C
#include <stdio.h>
#include <stdlib.h>

void print_moves (char c, int r)
{
	/* FIXME */
}

int main () 
{
	char c ;
	int r ;

	scanf("%c%d", &c, &r) ;

	print_moves(c, r) ;

	return EXIT_SUCCESS ;
}
```

When a user gives input ``b7``, the program is expected to produce the following result:
```
a5
c5
d6
d8
```

### Problem 5

Complete the following program that receives ten integer program from a user, and then print the given ten numbers backward.

```C
#include <stdio.h>
#include <stdlib.h>

void read_print_backward (int n)
{
	/* FIXME */
}

int main () 
{
	read_print_backward(10) ;

	return EXIT_SUCCESS ;
}
```

### Problem 6

Complete the following program with a recursive function ``print_star`` such that for given a positive integer ``N``, the program prints out ``N`` lines where *i*-th line prints ``x`` for *i* times.

```C
#include <stdio.h>
#include <stdlib.h>

void print_stars ()
{
	/* FIXME */
}

int main () 
{
	int N ;
	
	scanf("%d", &N) ;
	print_stars(N) ;

	return EXIT_SUCCESS ;
}
```

For example, if a user gives 5, the program will print out the following:
```
*
**
***
****
*****
```

### Problem 7
Complete the following program that receives ten non-zero positive integers from a user, and then print the greatest number among the ten.
Function ``read_print_max`` is to receive the number of the remaining inputs ``N`` and to return the greatest value so far ``max`` (initially 0).

```C
#include <stdio.h>
#include <stdlib.h>

void read_print_max(int N, int max)
{
	/* FIXME */
}

int main () 
{
	read_print_max(10, 0) ;

	return EXIT_SUCCESS ;
}
```

### Problem 8

Complete the following program that finds all divisors of a given positive integer ``N``. 
You must write the body of a recursive function ``print_divisors`` which prints ``d`` if ``d`` divides ``N`` and recurively calls itself to explore possible divisors.

```C
#include <stdio.h>
#include <stdlib.h>

void print_divisors (int N, int divisor) 
{
	/* FIXME */
}

int main () 
{
	int N ;
	
	scanf("%d", &N) ;
	print_divisors(N, N) ;

	return EXIT_SUCCESS ;
}
```

If a user gives ``24``, the program must print out the following:
```
24
12
8
6
4
3
2
1
```
