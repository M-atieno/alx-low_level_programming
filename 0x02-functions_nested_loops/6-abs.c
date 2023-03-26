#include "main.h"

/**
 * _abs - function that prints the absolute value
 *
 * @b: function parameter
 *
 * Return: b (when succesful)
 */

int _abs(int b)
{
	if (b < 0)
		b = -(b);
	else if (b >= 0)
		b = b;
	return (b);
}
