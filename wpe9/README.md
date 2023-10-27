# Weekly Programming Exercise (Oct. 27, 2023)

### Scope of study
* Array
* String
* Pointer

### Problem 1

Write a program that draws a 10-by-10 board of the Minesweeper game (see https://en.wikipedia.org/wiki/Minesweeper_(video_game) ).

This program first receives upto 10 locations of mines, and then prints the numbers of the cells (i.e., the number shown when a cell is open) to the screen. The number of a cell is the number of the mines in the surrounding cells.

The user gives a location as a pair of integer that represents the row number and the column number of a mine. When the user gives ``0``, the program stops receving the input and proceeds to generate the board.

For example, the user may give the following as input:

```
1 5
2 4
3 6
7 8
9 8
8 2
0
```

Then, the program must produce the following:

```
0 0 1 1 * 1 0 0 0 0
0 0 1 * 3 2 1 0 0 0
0 0 1 1 2 * 1 0 0 0
0 0 0 0 1 1 1 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 1 1 1 0
1 1 1 0 0 0 1 * 1 0
1 * 1 0 0 0 2 2 2 0
1 1 1 0 0 0 1 * 1 0
0 0 0 0 0 0 1 1 1 0
```

The location of a mine is marked as astrisk (i.e., ``*``).

### Problem 2

Write a program that receives 10 intervals, and combines the overapping ones, and then prints out the resulting intervals. An interval is given as a pair of ``double`` numbers representing the starting point and the ending point in order. An interval represents a range of real numbers inclusively. Two intervals are overlapping if there exists a real number that belongs to both. For instance, [1.0, 4.0] and [3.0, 5.0] are overlapping; [1.0, 5.0] and [5.0, 7.0] are overlapping as well because 5.0 is in the two intervals at the same time.

Suppose that the user gives the following input:
```
3.23 56.10
56.70 78.20
45.30 56.20
14.67 45.90
2.40 67.30
33.90 40.50
25.60 35.70
78.80 89.0
1.25 1.75
0.90 1.50
```

For this input, the program must produce the following output:
```
2.4 78.2
78.8 89.0
0.9 1.75
```

### Problem 3

Write a program that receives a alphanumeric string from the user, and decomposes it into alphabet strings and numbers. Assume that the length of the input string does not exceed 128 and it does not contain any whitespace.

Suppose that the user gives the following input:
```
NTH313HGU558HandongroPohang37554
```

The result of the decomposition is as follows:
```
NTH
313
HGU
558
HandongroPohang
37554
```

### Problem 4

Complete function ``arr_subtract`` in the following program, that updates ``a1`` such that the numbers that appear in ``a1`` but not ``a2`` remains in ``a1``. This function returns the length of the ``a1`` array after the update.

```C
#include <stdio.h>
#include <stdlib.h>

/* l1 and l2 represents the number of elements in a1 and a2, respectively. */
int arr_subtract (int * a1, int l1, int * a2, int l2)
{
	/* FIXME */
}

int main ()
{
	int a1[16] = {14, 6, 8, 82, 7, 728, 87, 9} ;
	int a2[16] = {6, 82, 7, 78, 3, 9, 66, 2, 8, 87, 26} ;

	int l ;

	l = arr_subtract(a1, 8, a2, 11) ; 

	int i ;
	for (i = 0 ; i < l ; i++) {
		printf("%d ", a1[i]) ;
	}

	return EXIT_SUCCESS ;
}
```

The expected output is as follows:
```
14 82 728 
```

### Problem 5

Write a function ``substring`` in the following program, that prints out all substrings of a given string.

```C
#include <stdio.h>
#include <stdlib.h>

void substrings (char * s)
{
	/* FIXME */
}

int main ()
{
	char s[16] = "Hello" ;

	substrings(s) ;

	return EXIT_SUCCESS ;
}
```

This program is expected to produce the following output:
```
H
e
l
l
o
He
el
ll
lo
Hel
ell
llo
Hell
ello
Hello
```
