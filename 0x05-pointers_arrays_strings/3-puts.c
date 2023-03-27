#include "main.h"
 /**
  * _puts - function that print a string
  *
  * @str: parameter for the function
  *
  * Return: 0 when succesful
  *
  */

void _puts(char *str)
{
	int a;

	for (a = 0 ; str[a] != '\0' ; a++)
		_putchar(str[a]);
	_putchar('\n');
}
