#include <stdio.h>
#include <unistd.h>

/**
 * Define an array containing conmand and arguments
 * Another array for env variable to set NULL
 * Call the execve() function providing the path to
 * executable file
 *
 * Return: -1 for failure
 */


int main()
{
	int cmd;
	char *argv[] = {"/bin/ls", "-l", NULL};
	char *env[] = {NULL};
	
	cmd = execve("/bin/ls", argv, env);

	if(cmd == -1)
	{
	perror("Error:");
	}

	printf("After execve\n");

	return 0;



}
