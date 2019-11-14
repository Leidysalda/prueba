# C - Simple Shell

Unix shell is a command-line interpreter or shell that provides a command line user interface for Unix-like operating systems. The shell is both an interactive command language and a scripting language, and is used by the operating system to control the execution of the system using shell scripts. [Wikipedia-Unix Shell](https://en.wikipedia.org/wiki/Unix_shell)

![Shell](https://upload.wikimedia.org/wikipedia/commons/1/1f/Tcsh_ejecut%C3%A1ndose_en_escritorio_Mac_OSX.png)

## PID & PPID

A process is an instance of an executing program, that has a unique process ID. This process ID is used by many functions and system calls to interact with and manipulate processes. 

```
#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t my_pid;

    my_pid = getpid();
    printf("%u\n", my_pid);
    return (0);
}


```

## Authors ✒️

* **Leidy J. Saldaña** - *Shell Project* - [leidysalda](https://github.com/Leidysalda)


* **Juan C. López** - *Shell Project* - [juan-bbogota](https://github.com/juan-bogota)

## License 📄
