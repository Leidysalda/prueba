#include <stdio.h>

int main(int argc, char *argv[])
{
	int count;

	for(count=0; argv[count] != '\0'; count++)
		printf("argv[%d]: %s\n",count,argv[count]);
	return (0);
}
