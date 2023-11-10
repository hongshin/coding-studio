# Weekly Programming Exercise 11

### Study Scope
* String
* Structure
* Sorting


### Problem 1 

Add functions ``recv_input`` and ``draw_chessboard`` to complete the following program 
that receives upto 10 locations of Chess pieces from the users, and plot them on the screen.

In each line, a user gives a location and a piece type. The location is written
as a combination of a column letter (``a`` to ``h``) and a row number (``1`` to ``8``).
A piece type is either ``Pawn``, ``Bishop``, ``Knight``, ``Rook``, ``Queen`` or ``King``.
For example, the user may give ``2H Bishop``, ``4d Queen`` and ``5C Pawn`` in a line.
In addition, the user may give ``0`` to terminate the input.

Function ``recv_input`` receives the input from the user and updates the given array ``pieces``,
and returns the number of given pieces. Function ``draw_chessboard`` prints the chessboard
with the given pieces.

```C
#include <stdio.h>
#include <stdlib.h>

typedef 
    struct {
        int row ;
        int col ;
        char sym ;
    }
    piece_t ;

/*FIXME*/

int main ()
{
    int n ;
    piece_t pieces[10] ;

    n = recv_input(figures) ;
    draw_chessboard(pieces, n) ;
    
    return EXIT_SUCCESS ;
}
```

Suppose that the user input the following lines:
```
2h Bishop
4d Queen
5c Pawn
7f King
0
```
The program must print out the followings:
```
   a b c d e f g h
   ---------------
8| + + + + + + + +
7| + + + + + K + +
6| + + + + + + + +
5| + + P + + + + +
4| + + + Q + + + +
3| + + + + + + + +
2| + + + + + + + B
1| + + + + + + + +
```

### Problem 2 

Write a program that receives 10 words from a user, and then prints them in the following orders:
(1) a word with a shorter length must come earlier than a word with a longer length, and 
(2) for two words with the same length, the lexicographically preceding word must come earlier.

For example , if the user gives ``john paul mark tom james kim ng``, the program must the followings:

```
ng
kim
tom
john
mark
paul
james 
```

### Problem 3 

Write function ``create_triangle`` in the following program, that updates a ``triangle_t`` variable  ``t``
with the six arguments representing the locations of the three verticies.
Also, write function ``triangle_area`` in the following program, that returns the area of a given triangle ``t``.
Note that ``triangle_t`` is to represent a triangle whose three verticies are defined in the ``verticies`` field.

```C
#include <stdio.h>
#include <stdlib.h>

typedef 
    struct {
        double x ;
        double y ;
    }
    point_t ;

typedef 
    struct {
        point_t verticies[3]
    }
    triangle_t ;

void create_triangle (triangle_t * t, double x1, double y1, double x2, double y2, double x3, double y3)
{
    /*FIXME*/
}

double triangle_area (triangle_t * t)
{
    /*FIXME*/
}

int main ()
{
    triangle_t t ;

    create_triangle(&t, 2.0, 3.0, 2.0, 7.0, 5.0, 5.0) ;

    printf("%lf\n", triangle_area(t)) ;
    
    return EXIT_SUCCESS ;
}
```

### Problem 4

``getchar`` is one of the standard library declared in ``stdio.h`` for receving one character at a time from the user input.
Complete the following program such that it stores lines of the user inputs to array ``lines`` until the user gives an empty line.
Note that a line is ended with ``'\n'``. Assume that each line does not exceed 128 characters, and the user gives no more than 10 lines.

```C
#include <stdio.h>
#include <stdlib.h>

typedef 
    struct {
        int row ;
        int col ;
        char sym ;
    }
    piece_t ;

/*FIXME*/

int main ()
{
    char lines[10][129] ;
    int n_lines = 0 ;

    /*FIXME: use getchar() */

    for (int i = 0 ; i < n ; i++>) {
        printf("%s\n", lines[i]) ;
    }
    
    return EXIT_SUCCESS ;
}
```

### Problem 5

Complete function ``create_timestamp`` which converts the given string of a timestamp to a ``timestamp_t`` value.
A timestamp is represented as ``YYYY-MM-DD HH:MM:SS.ms``, for example, ``2009-09-22 16:47:08.128`` where ``128`` represents miliseconds.

```C
#include <stdio.h>
#include <stdlib.h>

typedef 
    struct {
        int year ;
        int month ;
        int day ;
        int hour ;
        int min ;
        int second ;
        int millisecond ;
    }
    timestamp_t ;

timestamp_t create_timestamp(timestamp_t * ts, char * s)
{
    /*FIXME*/
}

int main ()
{
    char s [] = "2009-09-22 16:47:08.128" ;
    timestamp_t ts ;

    create_timestamp(&ts, s) ;

    printf("%d-%d-%d %d:%d:%d.%d", ts.year, ts.month, ts.day, ts.hour, ts.min, ts.second, ts.millisecond) ;
    
    return EXIT_SUCCESS ;
}
```