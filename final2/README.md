# Final Exam 2 (Dec 14, 2023)

### Instruction
Submit your answers to https://forms.gle/GkiUBY4Zcf1xvdu5A

### Problem 1

Complete the following program (''timestamp.c'') by writing function ``create_timestamp`` which converts the given string of a timestamp to a ``timestamp_t`` value,
and writing function ``timestamp_diff`` which calculates the time difference between two given timestamps.
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

timestamp_t timestamp_diff(timestamp_t a, timestamp_t b)
{
    /*FIXME*/
}

int main ()
{
    char s1 [] = "2009-09-22 16:47:08.128" ;
    char s2 [] = "2023-12-14 17:00:00.000" ;

    timestamp_t ts1, ts2, ts3 ;

    create_timestamp(&ts1, s1) ;
    create_timestamp(&ts2, s2) ;

    printf("%d-%d-%d %d:%d:%d.%d", ts1.year, ts1.month, ts1.day, ts1.hour, ts1.min, ts1.second, ts1.millisecond) ;

    ts3 = timestamp_diff(ts2, ts1) ;
    
    return EXIT_SUCCESS ;
}
```

### Problem 2

Write a program that receives a string that consists of ``{``, ``}``, ``[`` and ``]``, and then 
vertically aligns the brackets with proper indentations.
For example, if the user gives ``{{[]{}}}{[]}``, the program must print the following:

```
{
	{
		[
		]
		{
		}
	}
}
{
	[
	]
}
```
This program must not print anything if a curly bracket is not properly matched in the given string.




