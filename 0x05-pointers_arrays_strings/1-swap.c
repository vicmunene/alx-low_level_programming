#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 */
void swap_int(int *a, int *b)
/* the function that swaps the values of two integers. */
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
