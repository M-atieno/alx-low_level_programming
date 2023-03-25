#include<stdio.h>

/**
 * main - main function
 * Description:'print possible single digit combinations'
 * Return: 0 ( when successful)
 */

int main(void)
{
	int m;

	for (m = 0 ; m < 10 ; m++)
	{
		putchar(m + '0');
		if (m != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
