#include <stdio.h>

/**
 * main - entry point
 * Description:'prints the alphabet in lowercase minus e and q'
 *
 * Return: 0 (when successful)
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
