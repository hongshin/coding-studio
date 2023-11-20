### File Input/Output

The computer system produces data to the outside as a byte sequence, 
and receives data from the outside as reading a byte sequence. 
Such a sequence of bytes is called as a ``file``. 
Files are used as medium of communication and interaction of software 
and hardward components and extenral components connected via networks.
Operating systems offer operations for an application program to 
create, read and write files for different purposes.

The most popular case of a file is a *regular file* that stores data 
in a storage. The location of a regular file is represented as a *file path*
which consist of all names of the directories containing the file and 
the *file name*.

Reading and writing on a file in a C program is different from reading 
and writing on memory, because the program cannot make file accesses by itself,
but always via operating systems. For this reason, file read and write 
must happen with standard library functions for file input and output.
Most of these functions are declared in ``stdio.h``.

To read a file in a program, the program first opens the file with ``fopen``.
We can open a file for reading, writing or both. To read a file,
the third argument of a ``fopen`` call must be ``"r"`` to declare 
that the file is open in the read mode.
``fopen`` returns a pointer to a ``FILE`` structure which contains 
the information about the target file. This file pointer is used for
indicating which file is concerned in a file operation, thus it must 
be given as an argument to all file operations accessing the file.

Using this file pointer, you can read the file data using file input functions.
Although there are many different file input functions, here we want to
discuss the following two popular ones:
* ``fscanf``
* ``fgetc``

These two functions works the same as ``scanf`` and ``getc`` except that
these receive a file pointer as an argument in addition.
A surprising fact is that we already had used a special file ``stdin``
without any explicit ``fopen`` as the computer system automatically opens
it and connects it with the user input when a program starts.
Thus, ``getc()`` is the same as ``fgetc(stdin)``, and ``scanf(...)`` is
``fscanf(stdin, ...)``.

These functions will return a valid value as long as the file is not ended.
But, at the end, the file is terminated. We can check if the file of a file
pointer is ended or not by calling the ``feof`` function.

If you open a file with the ``w`` argument, the file is open for writing.
This call creates a new file if the specified file name does not exist.
Or, it overwrites to the existing file. Use ``a`` if you want to append to
the existing file.

We can write to a file using file output functions like the following two
popular ones:
* ``fprintf``
* ``fputc``

At this point, you can guess about the dual of ``stdin``. Yes, we have 
``stdout``, the file for the standard output which is connected with 
the screen.

Once your program finishes using a file, your program must explictly close
the file by calling the ``fclose`` function.
