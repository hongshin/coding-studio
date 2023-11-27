# Programming Task 14 (Nov 27, 2023)

### Instruction

Submit your answers at https://forms.gle/uZspRfdeWuG5kXwY6 by 6:00 PM.


### Problem 1

Write ``tents.c`` that reads a 5x5 Tents puzzle from ``tents.txt``
and draws the puzzle board on the screen.

Tents is a guessing puzzle that finds all locations of tents in 
the given grid. On the puzzle board, one or multiple trees are 
located, and a number is given for each row and column as clues.
The same number of tents are placed while satisfying the following
conditions: 

* A tent must be vertically or horizontally adjacent to a tree
* Two tents must not be adjacent to each other verticially, horizontally,
or diagonally.
* The number given to a column (row) is the number of the tents in the
column (row).

Based on these clues, a player is asked to find all locations of tents.

``tents.txt`` specifies the arrangement of the trees and the tents.
The first line contains the number of tree (N) which is the same as the number of tents.
The next N lines specifies the positions of a tree and an attaced tent. Each line 
*x1*, *y1*, *x2* and *y2* which corresponds to the column number (1 to 5) and the row number (1 to 5) of
the tree, and the column number and the row number of the corresponding tent, repsectively.

Let's see a example:

<img src="https://i.imgur.com/txzPcBe.png" width=400 />

``tents.txt`` must be as follows to specify this puzzle instance:

```
7
1 2 1 1
1 5 2 5
2 4 2 3
3 2 3 1
4 2 4 3
4 5 5 5
5 2 5 1
```

Given this input, your program must print the puzzle board as follows:

```
  1 2 1 1 2
3          
0 T   T T T
2          
0   T      
2 T     T   
```

In addition, if the arrangement specified in ``tents.txt`` violates
the requirements, your program must print out an error message.

For example, if ``tents.txt`` is as follows, the program must print out ``Wrong input``:
```
7
1 2 1 1
1 5 2 5
2 4 3 4 
3 2 3 1
4 2 4 3
4 5 5 5
5 2 5 1
```

### Problem 2

Complete [searchniv.c](searchniv.c) that prints out a NIV bible verse as the user commands.
The functionality of each function in ``searchniv.c`` is as follows:

* ``str_to_verse(s, v)`` writes on a ``verse_t`` structure with a given text line ``s``.
* ``print_verse(v)`` prints out the verse to the screen
* ``is_verse_matched(v, a)`` determines whether the ``verse_t`` value in ``v`` is matched 
  with the command-line argugments ``a``

This program must print nothing if no verse is matched with the user command.
