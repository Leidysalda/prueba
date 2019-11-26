# SHELL PROJETC - SIMPLE SHELL

Unix shell is a command-line interpreter or shell that provides a command line user interface for Unix-like operating systems. The shell is both an interactive command language and a scripting language, and is used by the operating system to control the execution of the system using shell scripts. [Wikipedia-Unix Shell](https://en.wikipedia.org/wiki/Unix_shell)

![Shell](https://upload.wikimedia.org/wikipedia/commons/1/1f/Tcsh_ejecut%C3%A1ndose_en_escritorio_Mac_OSX.png)


The shell will be compiled this way🔧

´´´
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
´´´

For testing

´´´
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
´´´

To run tests ⚙️

This project consists of test cases for the simple shell created in Holberton School Bogotá.
[Test](https://github.com/luismedinaeng/bog0919-simple_shell_tests)


Deployment 📦

´´´
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - fork & wait example
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t child_pid;
    int status;

    child_pid = fork();
    if (child_pid == -1)
    {
        perror("Error:");
        return (1);
    }
    if (child_pid == 0)
    {
        printf("Wait for me, wait for me\n");
        sleep(3);
    }
    else
    {
        wait(&status);
        printf("Oh, it's all better now\n");
    }
    return (0);
}
´´´

Tools 🛠️

*_getline_ [Read line ./prompt](https://linux.die.net/man/3/getline)
*_execve_ [System call - Executing a program] (https://linux.die.net/man/2/execve)
*_fork_ [Creating processes](https://linux.die.net/man/2/fork)
*_wait_ [Suspends execution of the calling process](https://linux.die.net/man/2/wait)

Librarys
#include (stdio.h)
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include "myshell.h"

Coding style ⌨️

Use the Betty style, it will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl) 

## Authors ✒️

* **Leidy J. Saldaña** - *Shell Project* - [leidysalda](https://github.com/Leidysalda)


* **Juan C. López** - *Shell Project* - [juan-bogota](https://github.com/juan-bogota)

Licence 📄

This project is under License (https://opensource.org/).