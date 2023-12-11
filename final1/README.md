# Coding Studio: Final Exam 1 (Dec 11, 2023)

### Instruction
* It is strictly prohibited to use unauthorized materials or tools including ChatGPT, messesngers, email, web pages,
etc; you are not allowed to collaborate with others in person or online.
* Submit each solution by 5:45 PM at the following Google form: https://forms.gle/ZAGMr1vSPYbCaGEGA

### Problem 1

Write a program that utilizes ``fgetc`` to read each line from ``text.txt``, 
and then prints out the shortest line (or lines) and then the longest line (or lines);
in case of ties, print all of them in order.
Your program should work correctly regardless of the length of ``text.txt``.

For example, suppose that ``text.txt`` is given as follows:
```
Monday
Tuesday
Wednesday
Thursday
Friday
Sunday
Saturday
```

The expected output is as follows:
```
Monday
Friday
Sunday
Wednesday
```

### Problem 2

Complete ``str_to_arr`` in the following program. ``str_to_arr`` takes a string
containing a list of integers and then returns an array of integers in the same order.
In the given string, numbers are separated by a whitepace or comma.
The length of the returned array is stored at the memory pointed by ``length``.

```C
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int * str_to_arr (char * s, int * length)
{
	//FIXME
}

int main ()
{
	int n ;
	int * a ;

	a = str_to_arr("1 2, 34, 5,, 6", &n) ;

	for (int i = 0 ; i < n ; i++) {
		printf("%d\n", a[i]) ;
	}
	return EXIT_SUCCESS ;
}
```

This program is expected to print the following:
```
1
2
34
5
6

```

