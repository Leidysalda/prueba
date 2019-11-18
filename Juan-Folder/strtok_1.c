#include <stdio.h>
#include <string.h>


int main()
{
	char cadena[] = "Hola,mundo,soy,una,cadena,separa,por,comas",
		delimitador[] = ",";
	char *token = strtok(cadena, delimitador);
	int i = 1;
	if(token != NULL){
		while(token != NULL){
			// Sólo en la primera pasamos la cadena; en las siguientes pasamos NULL
			printf("Token[%d]: %s\n",i, token);
			token = strtok(NULL, delimitador);
			i++;
		}
	}
	return(0);
}
