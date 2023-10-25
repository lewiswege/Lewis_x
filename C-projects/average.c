#include <stdio.h>
/**
 * calculates the average marks of five students
 * Or more depending on your mood if it swings
 */
int main()
{
	float avg, sum = 0;
	int i;
	float marks [5];
	
	for (i=0; i<5; i++)
	{
		printf("Enter marks\n");
		scanf("%2f", &marks[i]);
	}
	for (i=0; i<5; i++)
	{
		sum = sum + marks[i];
	}
	
		avg = sum/5;
		printf("Average marks = %f", avg);

	return 0;
}


