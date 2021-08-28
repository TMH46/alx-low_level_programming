#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: return 0 successful excution
 *
 *Description: this code prints lowercase alphabet
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	putchar(alph);
	putchar('\n');

	return (0);
}
