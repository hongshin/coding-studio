# Weekply Programming Exercise 4 (Sep 21, 2023)

### Study scope
* Conditional statements
* Function
* Recursion function
* Scanf

The study scope is the same as Weekly Programming Exercise 3.

### Problem 1 ###
Use recursion to write a program that receives a an alternating sequence of integer and add or substraction operators ended with ``=``, and then prints out the computation result.

In input, there must be no whitespace between an integer and the following operator. The length of an input is not fixed. An example of a valid input is as follows:
```
1+3-2+9+6-2+7=
```
For this input, the expected output is as folows:
```
22
```
Assume that the length of a sequence does not exceed 100, and always given input is well structured.


### Problem 2 ###
Write a program that receives a positive integer and use recursion to determine whether the number is a prime number, or not. If the given number is a prime number, print ``A prime number``. Otherwise, print ``Not a prime number``

### Problem 3 ###

Wriet a program that receives a positive integer, and print the number while placing comma at every three digit positions.
For example, when ``123345678`` is given, the program must print the following:
```
123,345,678
```

Of course, your program must use recursion. Note that the range of integer is between -2147483647 and 2147483647.


### Problem 4 ###
Write a program that draws the positions of a *N*-by-*N* chessboard for a given integer *N*.

For *N*=5, the following must be printed:
```
a5 b5 c5 d5 e5
a4 b4 c4 d4 e4
a3 b3 c3 d3 e3
a2 b2 c2 d2 e2
a1 b1 c1 d1 e1
```

As another example of *N*=11, the following must be printed:

```
a11 b11 c11 d11 e11 f11 g11 h11 i11 j11 k11
a10 b10 c10 d10 e10 f10 g10 h10 i10 j10 k10
a09 b09 c09 d09 e09 f09 g09 h09 i09 j09 k09
a08 b08 c08 d08 e08 f08 g08 h08 i08 j08 k08
a07 b07 c07 d07 e07 f07 g07 h07 i07 j07 k07
a06 b06 c06 d06 e06 f06 g06 h06 i06 j06 k06
a05 b05 c05 d05 e05 f05 g05 h05 i05 j05 k05
a04 b04 c04 d04 e04 f04 g04 h04 i04 j04 k04
a03 b03 c03 d03 e03 f03 g03 h03 i03 j03 k03
a02 b02 c02 d02 e02 f02 g02 h02 i02 j02 k02
a01 b01 c01 d01 e01 f01 g01 h01 i01 j01 k01
```

Assume that *N* does not exceed 20.

### Problem 5 ###

Write a pretty-priting version of ``sum_of_sums.c`` that produce the following printings when it receives ``4``.

```
sum(1) = 1 = 1
sum(2) = 1+2 = 3
sum(3) = 1+2+3 = 6
sum(4) = 1+2+3+4 = 10

sum_of_sums(4) = sum(1)+sum(2)+sum(3)+sum(4) = 20
```

You must write multiple recursive functions for this.
