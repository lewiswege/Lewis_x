#include <stdio.h>

/**
 * give the main function arguments
 * start the index at 1 to skip first argument argv[0]
 * while loop runs as long as argv[j] is not null
 */
int main(int argc, char *argv[])
{
	int i = 1;
	while (i < argc) {
	printf("argument %d is : %s\n", i, argv[i]);
	i++;
	}
	
	return (0);
}

