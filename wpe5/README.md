# Weekly Programming Exercise (Sep 28)

### Study topic
* Logical connectors (e.g., ``&&``, ``||``)
* Iteration with while-statemenet and for-statement

### Problem 1

Complete function ``min_max`` that finds ``x`` in [-10.0, 10.0] that makes ``formula`` minimal and maximal outputs. ``min_max`` must check ``x`` values between -10.0 and 10.0 with step size 0.001. 
``min_max`` prints out the minimal value of ``formula(x)`` with ``x``, and also the maximal value of ``formula(x)`` with ``x``. 

```C
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double formula (double x)
{
	double a4, a3, a2, a1, b ;
	double y ;

	a4 = 0.002 ;
	a3 = -0.1 ;
	a2 = 0.01 ;
	a1 = 10.0 ;
	b = -5.0 ;

	y = a4 * pow(x, 4.0) + a3 * pow(x, 3.0) + a2 * pow(x, 2.) + a1 * x + b ;

	return y ;
}

void min_max ()
{
	/* FIXME */
}

int main ()
{
	min_max() ;
	return EXIT_SUCCESS ; 
}
```

For the given ``formula``, the expected output is as follows:
```
min: -41.263083 (x=-5.371000)
max: 36.551340 (x=6.378000)
```

### Problem 2
Write a program ``cal.c`` which draws a calendar of a month. This program receives a two-letters that indicates which day the first day of the month (e.g., ``Su``, ``Mo``, ``Tu``, ``We``, ``Th``, ``Fr``, ``Sa``) and the number of the dates in the month. When the user types in ``We 31``, this program must print out the following:

```
Su Mo Tu We Th Fr Sa
         01 02 03 04
05 06 07 08 09 10 11
12 13 14 15 16 17 18
19 20 21 22 23 24 25
26 27 28 29 30 31
```

The following is the output for ``Fr 28``:

```
Su Mo Tu We Th Fr Sa
               01 02
03 04 05 06 07 08 09
10 11 12 13 14 15 16
17 18 20 21 22 23 24
25 26 27 28
```

### Problem 3
Write a program that draws on a chessboard all possible moves of a Queen at a given position.
The program first receives two integers indicating a row number and 
a column number where the Queen is placed.
Subsequently, the program draws 8-by-8 chessboard such that a cell is 
marked with ``Q`` if the Queen is placed, with ``o`` if the Queen can be 
placed at the next turn, or ``+`` otherwise. 
For example, if the user gives ``4 3``, the program must print out the following:

```
+ + o + + + o +
+ + o + + o + +
o + o + o + + +
+ o o o + + + +
o o Q o o o o o
+ o o o + + + +
o + o + o + + +
+ + o + + o + +
```

### Problem 4

Write a program that receives 20 characters of ``a``, ``b``, ``c``, and ``d``, and draws
a histogram that describes how many times each of the four letters appear.
If the user gives ``abbbcbdabbcddbdbcacd``, the histogram must be printed out as follows:

```
a: ###
b: ########
c: ####
d: #####
```

### Problem 5

Let's draw the histrogram vertically this time. This version of the histogram plotter must 
print out the following when the user gives ``abbbcbdabbcddbdbcacd``:

```
     ###
     ###
     ###
     ###     ###
     ### ### ###
 ### ### ### ###
 ### ### ### ###
 ### ### ### ###
 --- --- --- ---
  a   b   c   d
```
