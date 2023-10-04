#include <stdio.h>
#include <unistd.h>

/**
 * parent process ID
 * return: always 0
 */

int main()
{
	pid_t mypid = getppid();
	printf("%d\n", mypid);
	return (0);
}
