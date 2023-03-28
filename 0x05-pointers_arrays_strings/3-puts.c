#include "main.h"
#include <stdio.h>
 /**
  * _puts - writes the character pointer str to stdout
  * @str: the character to print
  * Return: 0
  */
void _puts(char *str)
{
	int a;

	for (a = 0 ; str[a] != '\0' ; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
