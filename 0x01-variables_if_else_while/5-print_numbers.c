#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: return 0 successful excution
 *
 *Description: This code prints all single digit numbers 0-9
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	printf("%d", num);
	printf("\n");

	return (0);
}
