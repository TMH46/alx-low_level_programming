#include <stdio.h>

/**
 *main - the entry point
 *
 *Return: return 0 successfull excution
 *
 *Description: This code prints alphabet both in lowercase and uppercase
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	putchar(alph);
	for (alph = 'A'; alph <= 'Z'; alph++)
	putchar(alph);
	putchar('\n');

	return (0);
}
