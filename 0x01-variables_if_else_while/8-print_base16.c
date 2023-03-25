#include <stdio.h>

/**
 * main - entry point
 * Description:'print numbers of base 16 in lowercase'
 * Return: 0( when successful)
 */

int main(void)
{
	int i;
	char m;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (m = 'a' ; m <= 'f' ; m++)
		putchar(m);
	putchar('\n');
	return (0);
}
