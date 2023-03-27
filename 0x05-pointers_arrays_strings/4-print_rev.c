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
	int value = 0;

	for (a = 0 ; s[a] != '\0'; a++)
		value++;
	for (a = value ; a >= 0 ; a--)
		_putchar(s[a]);
	_putchar('\n');
}
