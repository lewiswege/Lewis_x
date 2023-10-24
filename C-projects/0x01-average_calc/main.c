#include <stdio.h>
/**
 * calculates the average marks of five students
 */
int main()
{
	float avg, sum = 0;
	int i;
	int marks [5];
	
	for (i=0; i<=4; i++)
	{
		printf("Enter marks\n");
		scanf("%d", &marks[i]);
	}
	for (i=0; i<=4; i++)
	{
		sum = sum + marks[i];
	}
	
		avg = sum/5;
		printf("Average marks = %f", avg);

	return 0;
}

