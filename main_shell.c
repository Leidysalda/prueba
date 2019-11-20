#include "myshell.h"


/**
 * main - super simple shell
 *
 * Return: nothing
 **/
int main(void)
{
	char *buffer = NULL, delim[3] = " \n\t", **command, *tok;
	int status, i, len, ex;
	pid_t pidC;

	while(1)
	{
		printf("MyPrompt$ ");
		buffer = validator_getline();
		if (buffer  == NULL)
			continue;
	       	len = strlen(buffer);
		command = malloc(len * sizeof(*command));
		if(command == NULL)
		{
			perror("error allocated memory");
			continue;
		}
		else
		{
			tok = strtok(buffer, delim);
			while (tok)
			{
				command[i] = tok;
				tok = strtok(NULL, delim);
				i++;
			}
			command[i] = 0;
			pidC = fork();
			if (pidC == 0)
			{
				ex = execve(command[0], command, NULL);
				if(ex == -1)
					perror("Error");
			}
			else
			{
				wait(&status);
			}
		}
		free(buffer);
		free(command);
		i = 0;
	}
	return (0);
}


/**

VALIDATOR _ GETLINE

*/

char *validator_getline(void)
{

	char *buffer = NULL;
	size_t bufsize = 0;
	ssize_t ret;

	ret = getline(&buffer, &bufsize, stdin);
	if(!buffer)
	{
		perror("Error in Allocate Memory");
		return(NULL);
	}
	if(ret == EOF)
	{
		free(buffer);
		perror("EOF");
		exit(1);
	}
	if(ret == 1)
	{
		free(buffer);
		return(NULL);
	}
	return(buffer);
}


/**

STRTOK


*/
