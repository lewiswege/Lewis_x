#include <stdio.h>

int main()
{
	while (1){
	printf("$ ");
	
	char user_input[255];
	fgets(user_input, sizeof(user_input), stdin);
	//read line of text from stdin stream
	
	printf("%s", user_input);
	}
	

	return (0);
}
