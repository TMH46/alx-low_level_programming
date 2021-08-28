#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: return 0 successful excution
 *
 *Descripitions: Prints numbers in base16
 */

int main(void)
{
	char hex;

	for (hex = '0'; hex <= '9'; hex++)
	putchar(hex);
	for (hex = 'a'; hex <= 'f'; hex++)
	putchar(hex);
	putchar('\n');

	return (0);
}
