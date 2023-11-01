# Weekly Programming Exercise (Nov 01, 2023)

### Study scope
* Array
* String
* Pointer

### Problem 1

Write a program that receives the position of a Knight, and then draws all positions on the chessboard where the Knight can reach by one or two moves.

For example, if the user inputs ``2c``, the following must be printed on the screen:

```
   a b c d e f g h
   ---------------
8| + + + + + + + +
7| + + + + + + + +
6| 2 + 2 + 2 + + +
5| + 2 + 2 + 2 + +
4| + 1 + 1 + + 2 +
3| 1 2 + 2 1 2 + +
2| 2 + K + 2 + 2 +
1| 1 2 + 2 1 2 + +
```

### Problem 2

Complete the missing parts (``/*FIXME*/``) in [``digits.c``](digits.c).
This program receives a positive integer between 1 and 100000, and displays 
the numbers using the figures in 3d array ``digits``. For example, if the program receives ``365``, the following must be printed on the screen:

```
00000 0     00000
    0 0     0
 0000 00000 00000
    0 0   0     0
00000 00000 00000
```

### Problem 3
Complete function ``convert_to_double`` that returns the ``double`` value that the given string ``s`` represents.
Assume that a given string is a valid decimal representation of a real number, for examples, ``12.1``, ``-9.24`` and ``1.78e8``.

```
#include <stdio.h>
#include <stdlib.h>

double convert_to_double (char * s)
{
	/*FIXME*/
}

int main ()
{
	printf("%lf\n", convert_to_double("12.1")) ;
	printf("%lf\n", convert_to_double("-9.24")) ;
	printf("%lf\n", convert_to_double("1.78e8")) ;

	return EXIT_SUCCESS ;
}
```


### Problem 4
Write a program that receives a string that consists of ``{`` and ``}``, and then 
vertically aligns the brackets with proper indentations.
For example, if the user gives ``{{{}{}}}{{}}``, the program must print the following:

```
{
	{
		{
		}
		{
		}
	}
}
{
	{
	}
}
```
This program must not print anything if a curly bracket is not properly matched in the given string.

### Problem 5
Complete function ``longest_repeated_substr`` that prints out a substring of the given string ``s``
if the substring appears multiple times in ``s`` and the substring is the longest among such repeated
substrings. This function prints all if multiple longest substrings exist.

```
#include <stdio.h>
#include <stdlib.h>

void longest_repeated_substr (char * s)
{
	/*FIXME*/
}

int main ()
{
	longest_repeated_substr("conversation") ; /* it prints "on" */
	longest_repeated_substr("banana") ; /* it prints "ana" */
	longest_repeated_substr("Handong in pohang") ; /* it prints "an" and "ng". */

	return EXIT_SUCCESS ;
}
```
