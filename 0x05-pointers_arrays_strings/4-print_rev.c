#include "main.h"

/**
 * print_rev - function to print string in reverse
 *
 * @s: function parameter
 * Return: 0 when succesful
 */

void print_rev(char *s)
{
	int a;

	while (s[a])
		a++;
	while (a--)
		_putchar(s[a]);
	_putchar('\n');
}
