#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: return 0 successful excution
 *
 *Descripitions: Prints all possible different combinations of three digits
 */

int main(void)
{
	int num1, num2, num3;

	for (num1 = 0; num1 <= 7; num1++)
	{
		for (num2 = 1; num2 <= 8; num2++)
		{
			for (num3 = 2; num3 <= 9; num3++)
			{
				if ((num1 < num2) && (num2 < num3))
				{
					putchar(num1 + '0');
					putchar(num2 + '0');
					putchar(num3 + '0');
					if (num1 < 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
