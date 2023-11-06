# Programming Task 11 (Nov. 6, 2023)

### Instruction

Submit your results to https://forms.gle/17C9i7bKdKvfqNfM8 by 6:00 PM today.


### Problem 1 

A valid email address consists of a prefix (left to @) and a domain (right to @).
A prefix must consists of alphabet letters, digits, underscores, periods and dashes.
When an underscore, period or dash appears, it must be followed by a letter or number.

A domain must consist of letters, digits and dashes. The domain must contain at least
one dot, and there must be at least two letters after the last dot.

Write a program ``email.c`` that receives a string from a user, and then prints out
its prefix and its domain if the given string is a valid email address.

For example, if the user gives ``hongshin@handong.edu``, it must print out the following:
```
hongshin
handong.edu
```

If the given input is "hong$#handong", the program is expected to print nothing.


### Problem 2 

Complete function ``draw_boundaries`` in the following ``draw.c`` that draws a figure
of the given a 16-by-16 integer array such that only a boundary cell is marked as ``**``.

```C
#include <stdio.h>
#include <stdlib.h>

void draw_boundaries (int a[][16]) 
{
	/*FIXME*/
}

int main ()
{
	int a[16][16] = {
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0},
		{0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0},
		{0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0},
		{0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0},
		{0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0},
		{0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0},
		{0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1}
	}

	draw_boundaries(a) ;

	return EXIT_SUCCESS ;
}
```

The expected output of this program execution is as follows:

```

  **
  ****
  **  **
  **    **      ****
  ********  ****    ****
            **          ****
          **              **
          **              **
        **                **
        **              **
          ******    ******
                ****
                          ******
                          **  **
                          ******
```

### Problem 3 

Suppose that we represent a list of integers by enumerating numbers between ``[`` and ``]``
while seperating two adjacent numbers by comma ``,``. 

Complete function ``fill_arr`` in ``arr.c`` that updates array ``arr`` with the content of
the given string ``s`` and returns the number of elements if the given string ``s`` is valid. 
If ``s`` is invalid, ``arr`` must not be updated, and the function returns 0.
Here we assume that the size of ``arr`` is always greater than or equal to the number of
given elements.


```C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fill_arr (int arr[], char s[]) 
{
	/*FIXME*/
}

int main ()
{
	int arr[10] ;
	int n ;

	n = fill_arr(arr, "[3, 5, -7, 9]") ;
	
	for (int i = 0 ; i < n ; i++) {
		printf("%d\n", arr[i]) ;
	}

	return EXIT_SUCCESS ;
}
```

This program will print out the following:
```
3
5
-7
9
```
