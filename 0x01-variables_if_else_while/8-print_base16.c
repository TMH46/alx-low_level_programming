#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: return 0 successful excution
 *
 *Description: This code prints numbers of hexadecimal 
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
