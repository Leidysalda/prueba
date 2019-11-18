#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *buffer;
    size_t bufsize = 0;
    int n;

    buffer = malloc(bufsize * sizeof(char));
    if( buffer == NULL)
    {
        perror("Unable to allocate buffer");
        exit(1);
    }

    printf("$ ");
    n = getline(&buffer,&bufsize,stdin);
    if (n == -1)
	    printf("Error");
    else
	    system(buffer);
    printf("%s",buffer);
    free(buffer);
    return(0);
}
