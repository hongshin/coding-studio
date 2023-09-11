## Programming Task 2 (Sep 11)

### Study Scope

 * Variable
 * Type Casting
 * Arithematic Operations
 * Standard C Library Functions

### Instructions
Solve the given four problems following the guidelines in the problem descriptions.
Submit each programming result (source code files) to https://forms.gle/UKrgzeSpBekz1mPP9 .

Find the details of the math library functions at https://www.programiz.com/c-programming/library-function/math.h .

### Problem 1
In ``triangle.c``, function ``perimeter`` receives the three coordinates of a point and returns the sum of the three sides of the triangle.
Complete the budy of ``perimeter`` while assuming that each number is in range of 0 and 1000 and no two coordinates are the same.

Use function ``sqrt`` of the math library. Note that you must add the ``-lm`` option at compliation (e.g., ``gcc triangle.c -lm``).
You are allowed to write code to ``/* FIXME */``, and not allowed to change the other parts of the program.

```C
/* triangle.c */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double perimeter (int x1, int y1, int x2, int y2, int x3, int y3)
{
	/* FIXME */
}


int main () 
{
	printf("perimeter: %f\n", perimeter(2,3,10,7,8,9)) ;

	return EXIT_SUCCESS ;
}
```

### Problem 2

The scientific notation of a real number is to show the real number in a form of *a* x 10^*b* where *a* is a real number between 0.0 and 10.0 and *b* is the power of 10 for the number.
In ``notation.c``, function ``print_in_scino`` receives a non-zero positive ``double`` value, and prints it in the scientific notation.

Complete ``print_in_scino`` using the math library functions ``powr`` and ``log10``.
Note that you must add the ``-lm`` option at compliation (e.g., ``gcc notation.c -lm``).

```C
/* notation.c */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void print_scino(double v)
{
	/* FIXME */
}


int main () 
{
	print_scino(7587.2) ;

	return EXIT_SUCCESS ;
}
```


### Problem 3

Complete the following missing functions in ``eight_numbers.c``:

* ``arith_mean``: the arithematic mean of given eight ``double`` values.
* ``geo_mean``: the geometric mean of given eight ``double`` values (c.f., https://en.wikipedia.org/wiki/Geometric_mean).
* ``min``: the least value among the given eight ``double`` values.
* ``max``: the greatest value among the given eight ``double`` values.

Use ``fmin``, ``fmax``, ``power`` and ``sqrt`` in the math library.
Note that you must add the ``-lm`` option at compliation (e.g., ``gcc notation.c -lm``).

```C
/* eight_numbers.c */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* FIXME */

int main () 
{
	double a1 = 85.2, a2 = 857.8, a3 = 5.98, a4 = 81.47, a5 = 1.87, a6 = 733.8, a7 = 90.7, a8 = 66.21 ;
	
	printf("arithematic mean: %f\n", arith_mean(a1, a2, a3, a4, a5, a6, a7, a8)) ;
	printf("geometric mean: %f\n", geo_mean(a1, a2, a3, a4, a5, a6, a7, a8)) ;
	printf("greatest value: %f\n", max(a1, a2 ,a3, a4, a5, a6, a7, a8)) ;
	printf("least value: %f\n", min(a1, a2, a3, a4, a5, a6, a7, a8)) ;

	return EXIT_SUCCESS ;
}
```

### Problem 4
Write a function ``select_max`` in ``select_max.c`` that receives four non-zero positive ``int`` numbers,
and then prints out four integer numbers in order such that the greatest value is printed as it is while the others are printed as zero.
For example, ``select_max(6, 8, 12, 5)`` shows the following results:
```
0
0
12
0
```
As another example, ``select_max(7, 3, 2, 1)`` prints out the following:
```
7
0
0
0
```

```C
/* select_max.c */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void select_max (int a1, int a2, int a3, int a4)
{
	/* FIXME */
}

int main () 
{
	select_max(6, 8, 12, 5) ;
	select_max(7, 3, 2, 1) ;

	return EXIT_SUCCESS ;
}
```

Hint: First think about how to find the greatest among two values using ``fmin`` (not ``fmax``).

### Optional Problem

Wrtie a function that receives eight ``double`` values, and returns the second greatest value. Assume that always given eight numbers are all distinct.




