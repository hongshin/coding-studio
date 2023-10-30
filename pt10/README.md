# Programming Task 10 (Oct. 30, 2023)

### Instruction

Submit your solutions to https://forms.gle/T3WZc7cDvMyC1onH6 by 6:00 PM, 30 Oct. 2023.

### Scope of study
* Array
* String
* Pointer

### Problem 1

Write a function ``uniq_substrings`` in the following program, that prints each substring of a given string ``s`` exactly once.

```C
#include <stdio.h>
#include <stdlib.h>

void uniq_substrings (char * s)
{
	/* FIXME */
}

int main ()
{
	char s[16] = "banana" ;

	uniq_substrings(s) ;

	return EXIT_SUCCESS ;
}
```

This program is expected to produce the following output:
```
b
a
n
ba
an
na
ban
ana
nan
bana
anan
nana
banan
anana
banana
```

### Problem 2

Write a program ``rect.c`` that receives five rectangles from the user, 
and then finds the area covered by at least one of the five rectangles.
The user specifies a rectangle as four positive integer numbers, ``x``, 
``y``, ``w`` and ``h`` that represents the coordinate of the bottom-left 
corner, and the width and the height of the rectangle, respectively.
Assume that a given number does not exceed 100 in all cases.

Suppose that the input is given as follows:
```
20 20 20 20
15 15 10 10
15 35 10 10
35 15 10 10
35 35 10 10
```
The expected output is the following:
```
700
```

For another example, when the input is given as follows:
```
20 30 40 50
5 50 80 10
60 80 10 30
40 20 40 40
50 75 40 35
```

the output must be as follows:
```
4550
```

### Problem 3

Complete function ``arr_intersect`` in ``intersect.c``, that updates ``a1`` such that the numbers that appear in both ``a1`` and ``a2`` remain in ``a1`` while the others (i.e., ones that appear in ``a1`` only) are removed. The function returns the length of the ``a1`` array after the update.

```C
/* intersect.c */

#include <stdio.h>
#include <stdlib.h>

/* l1 and l2 represent the number of elements in a1, and that of a2, respectively. */
int arr_intersect (int * a1, int l1, int * a2, int l2)
{
	/* FIXME */
}

int main ()
{
	int a1[16] = {14, 6, 8, 82, 7, 728, 87, 9} ;
	int a2[16] = {6, 82, 7, 78, 3, 9, 66, 2, 8, 87, 26} ;

	int l ;

	l = arr_intersect(a1, 8, a2, 11) ; 

	int i ;
	for (i = 0 ; i < l ; i++) {
		printf("%d ", a1[i]) ;
	}

	return EXIT_SUCCESS ;
}
```

The expected output is as follows:
```
6 8 82 7 87 9
```


