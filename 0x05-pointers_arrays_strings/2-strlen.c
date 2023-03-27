#include "main.h"

/**
 * _strlen - function that prints length of a string
 *
 * @s: the character thst counts the length of a string
 *
 * Return: value
 */

int _strlen(char *s)
{
	int a;
	int value = 0;

	for (a = 0 ; s[a] != '\0' ; a++)
	{
		value++;
	}
	return (value);
}
