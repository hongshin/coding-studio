# Programming Task 13 (Nov 20, 2023)

### Study scope
* File Input/Output
* Array
* String


### Exercise 1

Write a program for the 15 Puzzle game (c.f., https://en.wikipedia.org/wiki/15_Puzzle ).

This program first reads the board setup from ``board.txt`` where the fifteen numbers 
from (1 to 15) and zero (0) are arranged as a 4-by-4 matrix. Zero indicates the empty cell.
At each turn, the program shows the current board and receive a number from the user.
The user must gives one of the number adjacent to the empty cell. 
When the user types in a valid number, the program swaps the number with the empty cell,
and then shows the board status, and continues these steps until the numbers are properly
aligned.

Let's see an example of the initial arrangement of the game board.

![image](https://upload.wikimedia.org/wikipedia/commons/thumb/f/ff/15-puzzle_magical.svg/440px-15-puzzle_magical.svg.png)

This board setting is represented in ``board.txt`` as follows:

```
12 1 2 15
11 6 5 8
7 10 9 4
0 13 14 3
```

You can find the sample input files in the current directory (e.g., ``board1.txt``. ``board2.txt``).


### Exercise 2

``NIV.txt`` contains all texts of the NIV bible, one verse in a line.

Write a program ``search.txt`` that receives a word from the user and then
show all NIV verses containing the word in a case insensitive way.

Assume that the length of a line in ``NIV.txt`` does not exceed 128 characters.

### Exercise 3

``movies.csv`` has the records of 77 movies in the CSV format.
In a line, the following attributes of a movie are given in sequence:
* Title
* Genre
* Lead studio
* Audience score (integer)
* Profitability (double)
* Rotten Tomatoes score (int)
* Worldwide Gross
* Year

Write a program that receives a movie title from the user, and prints out the information about the movie if it exists in ``movies.csv``. This program must have a structure ``movie_t`` to represent a movie record, load all data in ``movies.csv`` to a ``movie_t`` array.

Hint. Use ``atoi`` and ``strtod`` in ``stdlib.h``. 
