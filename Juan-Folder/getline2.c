#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
char *getline_validate();

int main(void)
{
    char *buffer;
    size_t bufsize = 0;
    int n;

    while(1)
    {
	    printf("#Cisfun$ ");
	    buffer = getline_validate();
	    if(buffer == NULL)
		    continue;
	    else
	    	    printf("%s",buffer);
	    free(buffer);

    }
    return(0);
}
char *getline_validate()
{
	char *buff = NULL;
	size_t buffsize = 0;
	ssize_t x;

	x = getline(&buff, &buffsize, stdin);
	if (buff == NULL)
	{
		perror("Error");
		return (NULL);
	}
	if (x == EOF)
	{
		free(buff);
		write(STDOUT_FILENO, "\n", 1);
		exit(0);
	}
	if (x == 1)
	{
		free(buff);
		return (NULL);
	}
	if (x == 0)
	{
		free(buff);
		return(NULL);
	}
	return (buff);
}
