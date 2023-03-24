#include <stdio.h>

/**
 * main - entry point
 * Description:'printing lower and upper case alaphabet'
 * Return: 0 (when success)
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
