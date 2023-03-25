#include <stdio.h>

/**
 * main - entry point
 * Description:'print 3 digits combination in ascending'
 * Return: 0 (when successful)
 */

int main(void)
{
	int i;
	int m;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (m = 1 ; m < 10 ; m++)
		{
			for (j = 2 ; j < 10 ; j++)
			{
				if (i < m && m < j)
				{
					putchar(i + '0');
					putchar(m + '0');
					putchar(j + '0');
					if (i + m + j != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);

}
