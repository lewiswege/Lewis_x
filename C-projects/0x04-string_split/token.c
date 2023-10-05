#include <stdio.h>
#include <string.h>

/**
 * include necessary headee file to access functions
 * declare 2 variables of character type - pointer and stri * string
 * return type: always 0
 */

int main()
{
	char str[] = "Hello, world! This is a test.";
	char *token;

	//get the first token
	token = strtok(str, " ,.!");

	while (token != NULL){
	printf("Token: %s\n ", token);

	//get the next token
	token = strtok(NULL, " ,.!");
	}

	
	return (0);


}
