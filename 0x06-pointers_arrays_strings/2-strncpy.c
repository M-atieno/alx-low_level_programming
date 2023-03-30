#include "main.h"
/**
 * _strncpy - function that copies string
 * @dest: destination string
 * @src: source string
 * @n: number of strings
 * Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0 ; a < n ; a++)
		dest[a] = src[a];
	return (dest);
}
