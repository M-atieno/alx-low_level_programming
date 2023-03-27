#include "main.h"

/**
 * swap_int - function that swaps intergers
 *
 * @a: function parameter 1
 * @b: function parameter 2
 *
 * Return: 0 (when successful)
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
