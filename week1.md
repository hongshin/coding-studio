
## Weekly Programming Exercise 1 (30 Aug 2023)

You are given the following four problems. I know that you just began to study C programming, 
but did not learn anything about writing code, 
except compling the existing C source code file.

Each problem is just asking you to follow the given instruction and see the results, or read some tutorials.
I want you to just try these. It is perefectly okay if you do not understand anything at this point. 

I am thinking about giving you lectures and hands-on next Mon class, not Programming Task.
So, feel free even if you cannot get these problems. But, just give it a try.

### Problem 1 ###

Create the following four variants of ``hello.c`` as follows, and compile these with ``gcc`` or ``clang``, and check the error messages.

* ``hello1.c``
```C
/* hello.c */
Int main ()
{
  printf("Hello, world!\n") ;
  return EXIT_SUCCESS ;
}
```

* ``hello2.c``
```C
/* hello.c */
int main ()
{
  printf("Hello, world!\n") ;
  return EXIT_SUCCESS ;
}
```

* ``hello3.c``

```C
/* hello.c 
#include <stdio.h>
#include <stdlib.h>

int main ()
{
  printf("Hello, world!\n") ;
  return EXIT_SUCCESS ;
}
```

* ``hello4.c``
```C
/* hello.c */
Int main ()
{
  printf("Hello, world!\n") 
  return EXIT_SUCCESS ;
}
```

Observe the error messages. What are the messages indicating? 
(Of course, you do not have to understand these at this moments)

### Problem 2. ###
Run the following command with a vaild source code file ``hello.c``, and find the result:
```gcc -o hello hello.c```
or
```clang -o hello hello.c```

How the results are different with ``gcc hello.c`` or ``clang hello.c``?

### Problem 3 ###
Download the following source code and data files
* https://github.com/hongshin/coding-studio/blob/main/wpe1/rushhour.c
* https://github.com/hongshin/coding-studio/blob/main/wpe1/map1.txt
* https://github.com/hongshin/coding-studio/blob/main/wpe1/map2.txt

This is the rushhour puzzle game.(like https://en.wikipedia.org/wiki/Rush_Hour_(puzzle) ).

Compile ``rushhour.c`` by ``gcc rushhour.c`` (or ``clang rushhour.c``).
Run ``./a.out map1.txt``, and solve the puzzle.
Also, ``./a.out map2.txt`` and solve the other puzzle as well.


### Problem 4. ###
Study the following tutorials on basic Unix commands:
* ``ls`` https://www.geeksforgeeks.org/ls-command-in-linux/
* ``cd`` https://www.geeksforgeeks.org/cd-command-in-linux-with-examples/?ref=lbp
* ``pwd`` https://www.geeksforgeeks.org/pwd-command-in-linux-with-examples/?ref=lbp
* ``mkdir`` https://www.geeksforgeeks.org/mkdir-command-in-linux-with-examples/?ref=lbp
* ``rm`` https://www.geeksforgeeks.org/rm-command-linux-examples/?ref=lbp
* ``cp`` https://www.geeksforgeeks.org/cp-command-linux-examples/?ref=lbp
* ``mv`` https://www.geeksforgeeks.org/mv-command-linux-examples/?ref=lbp
* ``cat`` https://www.geeksforgeeks.org/cat-command-in-linux-with-examples/?ref=lbp
