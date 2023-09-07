## Weekly Programming Exercise 2 (07 Sep 2023)



### Problem 1 ###

Write the misssing code at ``/* TODO */`` to complete the following C program, 
``ftoc.c``.  This program must prints out the corresponding temparatures in 
Celsius and Kelvin respectively, for a value stored at ``fahrenheit`` which is 
in the Fahrenheit degree.

```C
/* ftoc.c */

#include <stdio.h>
#include <stdlib.h>

int main () {
		
	int fahrenheit = 100 ;

	/* TODO */

	return EXIT_SUCCESS ;
}
```

### Problem 2 ###
You are asked to complete ``converter.c``, a currency converter for USD and KRW.
Suppoe that the currency exchange rate from USD to KRW is stored at ``exchange_rate``, 
and the given KRW value at ``KRW``.
Fill out the missing code at ``/* TODO */`` with arithematic operations and type cast 
such that it finds the corresponding USD value, rounds the value up, and prints it to the screen.
For example, when ``exchange_rate`` is ``1335.02`` and ``KRW`` is ``50000``, this program is 
expected to print out ``38``.

```C
/* converter.c */

#include <stdio.h>
#include <stdlib.h>

int main () {

	int KRW ;
	double exchange_rate ;

	exchange_rate = 1335.02 ;
	KRW = 50000 ;

	/* TODO: expect to print out 38 */

	return EXIT_SUCCESS ;
}
```

### Problem 3 ###

Complete the missing code at ``/* TODO */`` in ``time_converter.c`` which converts a number of minutes given at ``minutes`` to the number of days, hours and minutes.

```C
/* time_converter.c */

#include <stdio.h>
#include <stdlib.h>

int main () {
	int minutes ;

	minutes = 3140 ;

	/* TODO */

	return EXIT_SUCCESS ;
}
```

For ``minutes`` is ``3140``, the expected output is as follows:

```
2 days and 4 hours and 20 minutes
```

### Problem 4 ###

Complete the missing code at ``/* TODO */`` in ``rational.c`` that shows the result of ``a``/``b`` + ``c``/``d`` as a fraction number. The resulting fraction number may not be reduced.


```C
/* rational.c */

#include <stdio.h>
#include <stdlib.h>

int main () {

	int a = 5, b = 7 ;
	int c = 4, d = 9

	/* TODO */

	return EXIT_SUCCESS ;
}
```

This program is expected to print out the following:

```
73/63
```

### Problem 5 ###
Use only ``int`` arithematics to complete the missing code at ``/* TODO */`` in ``real.c`` such that that ``real.c`` prints out the result of ``a`` / ``b`` to the first digit to the right of the decimal point. 

```C
/* real.c */

#include <stdio.h>
#include <stdlib.h>

int main () {

	int a = 13, b = 7 ;

	/* TODO */

	return EXIT_SUCCESS ;
}
```

This program is expected to print out the following:
```
1.8
```

### Problem 6 ###

Fill in the missing code at ``/*TODO*/`` such that ``print_string.c`` prints out the message at the below:
```C
/* print_string.c */

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	printf("Hello") ;
	/* TODO */
	printf("Goodbye\n") ;

	return EXIT_SUCCESS ;
}
```
The expected execution result is as follows:
```
Goodbye

```

* Hint: https://en.wikipedia.org/wiki/Escape_sequences_in_C


### Problem 7 ###

Write a program that finds the character number for the following symbols:

* ``M``
* ``8``
* ``!``
* ``$``
* ``@``
* ``^``
* ``~``
