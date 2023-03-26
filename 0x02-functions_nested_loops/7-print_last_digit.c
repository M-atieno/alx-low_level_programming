#include "main.h"

/**
 * print_last_digit - function that prints the last digit
 *
 * @b: parameter to check
 *
 * Return: k (when succesful)
 */

int print_last_digit(int b)
{
	int i;

	i = b % 10;
	if (b < 0)
		i = -i;
	_putchar(i + '0');
	return (i);
}

