#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return: return 0 that returns to the function
 *
 * description: this code identifies the random numbers as positive, negative and zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if(n>0)
	{
		printf("%d is positive\n", n);
	} else if(n=0)
	{
		printf("%d is zero\n", n);
	} else
	{ 
		printf("%d is negative\n", n);
	}
	return (0);
}
