#include "main.h"

/**
 *print_alphabet - Prints the alphabet in lowercase
 *
 *Return: Nothing return
 */

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
