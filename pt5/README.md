# Programming Task 5 (09-Oct-2023)

### Instruction

To declare your attendance, submit the result (okay if it is intermittent) of each of the following two problems 
via Google Form https://forms.gle/L2GHroHxq8xDdxGb9 by 11:59 PM, 9 Oct.

### Problem 1

Write a program ``facto.c`` that presents the prime number factorization of a given positive integer number.
This program first receives a positivei integer between 2 and 10000 from the user, and prints out the list 
of prime number factors and their exponents. For example, if the user gives ``360``, the expected output is
as follows:

```
2^3 x 3^2 x 5^1
```

### Problem 2

Suppose that there is a coordinate plane where the range of x-axis [1, 20] and the range of y-axis is [1, 10].

Write a program that plots two rectangles given from the user on the screen.


The position of a rectangle is defined by four numbers ``x``, ``y``, ``w`` and ``h``, where
(``x``, ``y``) is the coordinate of a bottom-left corner, and ``w`` is the width and ``h`` is the height.
This program receives 4 numbers twice (total 8 numbers) to identify two given rectangles.

The area of the first given rectangle must be marked with ``*``, and the area of the second one with ``+``,
if exists, the overlapped part with ``#``.
Note that, on the screen, each coordinate must be marked with two characters, since the height of a character
is twice as its width in the console screen.

For example, if the user inputs ``3 4 5 5 6 5 3 4``, the following must be shown on the screen:

```


          ++++++
    ******####++
    ******####++
    ******####++
    **********



```

.End.
