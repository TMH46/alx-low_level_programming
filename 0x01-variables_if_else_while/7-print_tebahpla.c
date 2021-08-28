#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: return 0 successful excution
 *
 *Description: This code prints lowercase alphabets in reverse
 */

int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
	putchar(alph);
	putchar('\n');

	return (0);
}
