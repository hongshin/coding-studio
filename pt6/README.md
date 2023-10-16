# Programming Task 6 (Oct. 16, 2023)

### Study Scope
* Iteration
* Logical connectors

Note that you are not allowed to use array for solving the following problems.

### Instruction

Submit your programming results to https://forms.gle/iAHd7TA8fYTsdSb27 by 5:45 PM, 16 Oct 2023.



### Problem 1

Write a program ``concat.c`` that receives 5 non-negative integers each of which 
is between 0 and 99, and prints out an integer whose decimal representation is 
the concatenation of the decimal representations of the given five numbers. 
For exxample, if the program receives ``21``, ``8``, ``79``, ``0`` and ``4`` as input, 
the expected output is as follows:

```
2187904
```

Assume that inputs do not result any integer overflow issue.


### Problem 2

Write a program ``postfix.c`` that receives a positive integer ``N`` and then prints out 
every number whose decimal representation is a postfix of the ``N``'s decimal representation.

If the program receives ``365``, the following must be printed:
```
5
65
365
```

### Problem 3

Write a program ``repeat.c`` that determine whether the decimal representation 
of a given number is a repetition of one of its postfix. 
For example of ``123123``, your program must print out ``True`` because
``123`` is a postfix of ``123123``; the output must be ``True`` for
``1111`` and ``21212121``, for the same reason. For the other cases such as 
``1234321``, ``21212``, and ``167``, your program must print out ``False``.

You can reuse the code of ``postfix.c``.
