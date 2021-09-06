#include "main.h"
/**
 *swap_int - Swaps two integers values a & b
 *@a: Integer1
 *@b: Integer2
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
