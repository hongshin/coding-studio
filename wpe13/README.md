# Weekly Programming Exercise 13 (Nov 20, 2023)

### Study scope
* File Input/Output
* Array
* String

### Problem 1

``NIV.txt`` contains all texts of the NIV bible, one verse in a line.

Write a program ``search.txt`` that receives a word from the user and then
show all NIV verses containing the word in a case insensitive way.

Assume that the length of a line in ``NIV.txt`` does not exceed 128 characters.

### Problem 2

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


### Problem 3

Write a program ``linelimit.c`` that reads a text file ``input.txt``
and prints the contents to the screen while limiting the maximum character
in a line as 80.

For example, suppose that ``input.txt contains the following:
```
Handong Global University is a four-year, Christian university located in Pohang, South Korea. 
With students and faculty from more than 50 countries worldwide, Handong Global University provides an optimal global community to experience cultural diversity and develop global competence.
```

Your program must print out the text as follows
```
Handong Global University is a four-year, Christian university located in Poha-
ng, South Korea. 
With students and faculty from more than 50 countries worldwide, Handong Global
University provides an optimal global community to experience cultural diversi-
ty and develop global competence.
```

When a word is splitted by the new line, this program must add `-` at the
end of the earlier line. In the earlier example, you can find such cases 
for ``Pohang`` and ``diversity``. In addition, if a new line starts with 
one or more whitespaces, these whitespaces must be omitted. You can see
this case for the beginning of the fourth line.

### Problem 4

Battleship is a puzzle for finding the locations of hidden battleships 
on a grid board (see https://en.wikipedia.org/wiki/Battleship_(puzzle) ).
On the board, a hidden battleship spans one or multiple cells vertically or horizontally.
No two boards are overlapping or consecutively aligned.
A player cannot see the battleships, but can see the numbers given to 
each row and column, that indicates the number of cells where battleships
are placed.

Write a program that receives the locations of the battleships from ``ships.txt``, 
and then displays the 8x8 board with the battleships and the row and column numbers.

The first line of ``ships.txt`` has a positive integer ``N`` that indicates the number of
battleships, for 1 <= ``N`` <= 10.
And, each of the following ``N`` lines, the location of a battleship is given as four
numbers, ``x1``, ``y1``, ``x2``, ``y2`` such that (``x1``, ``y1``) indicates the top-left
corner and (``x2``, ``y2``) indicates the bottom-right corner.

Suppose that a puzzle has the battleships as follows:

<img src="https://www.puzzle-battleships.com/art/og/puzzle-battleships.png" width=250 />

For this case, ``ships.txt`` is defined as follows:
```
9
1 1 1 3
3 2 5 2
7 1 7 1
7 4 8 4
2 5 5 5
8 6 8 6
1 7 1 8
5 7 5 8
7 8 7 8
```

For this input, your program is expected to print out the following:
```
  5 1 2 2 4 0 3 2
2 ##          ##  
4 ##  ######      
1 ##              
2             ####
4   ########      
1               ##
2 ##      ##      
3 ##      ##  ##  
```
