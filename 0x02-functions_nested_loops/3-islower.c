#include "main.h"

/**
 * _islower - function that checks the lower case
 *
 * @c: parameter to be printed
 * Return: 1 if its a lowercase
 * Return: 0 if its not lowercase
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
