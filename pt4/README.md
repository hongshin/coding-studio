
## Programming Task 4 (Sep 24)

### Study scope
* Conditional statements
* Function and recursion
* ``scanf``

### Instruction

Solve the given three problems following the guidelines in the problem descriptions. 
Submit each programming result (source code files) to https://forms.gle/NW56qXanmwTqGKg9A .

### Problem 1

Write a program ``phone_number.c`` that receives 13 characters from a user and determines whether the given characters represents a valid cell phone number, or not. In Korea, a valid cell phone number must be of O1O-NXXX-XXXX where N is a number between 2 and 9, and X is a number between 0 and 9. If it is valid, your program must print ``valid``. Otherwise, your program must print ``invalid``.

### Problem 2

Write a program ``counto.c`` with one or multiple recursive functions, that receives a sequence of ``O`` or ``X`` from a user until the user types enter (i.e., ``\n``) and then prints out how many times ``O`` was given. If a user types any character other than ``O`` or ``X``, prints out ``Error`` and terminates the program.


### Problem 3

Complete ``triangle.c`` with recursive functions ``print_asterisks`` and ``print_triangle``, that draws a triangle with ``*`` for a given integer **N**. For example, if a user gives 5, the following must be printed:

```
*
**
***
****
*****
```

```C
/* triangle.c */

#include <stdio.h>
#include <stdlib.h>

void print_asterisks (int n)
{
	/* TODO: this recursive function is to print n asterisks to a line */
}

void print_triangle (int b, int n)
{
	/* TODO: this recursive function is to draw a triangle from b-th line to n-th line */
}

int main () 
{
	int n ;
	scanf("%d", &n) ;

	print_triangle(1, n) ;

	return EXIT_SUCCESS ;
}
```
