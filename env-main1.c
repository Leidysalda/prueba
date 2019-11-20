#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - prints the environment
 *
 * Return: Always 0.
 */
int main(int ac, char **av, char **env)
{
	int i;
	char delim[1]= ":", **token, *tok, *buffer;
	int len;
	i = 0;

	while (env[i] != NULL)
	{
		printf("%s\n", env[i]);
		i++;
	}
	len = printf("%s\n", getenv("PATH"));
	printf("%d\n",len);
	buffer = getenv("PATH");
	printf("buffer : %s", buffer);
	token = malloc(len * sizeof(*token));
	if(token == NULL)
		perror("error allocated memory");
	else
	{
		printf("else\n");
		tok = strtok(buffer, delim);
		i = 0;
		while (tok)
		{
			token[i] = tok;
			tok = strtok(NULL, delim);
			i++;
		}
		token[i] = 0;
		i = 0;
		while(token[i] != NULL)
		{
			printf("token[%d]: %s\n", i, token[i]);
			i++;
		}
	}
	return (0);
}
