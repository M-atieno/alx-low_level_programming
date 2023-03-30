#include "main.h"

/**
 * leet - encoding for leet
 * @str: encoded string
 * Return: str
 */

char *leet(char *str)
{
	int i;
	int j;

	char *a = "aAeEoOtT1L";
	char *b = "4433007711";

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (j = 0 ; a[j] != '\0' ; j++)
		{
			if (str[i] == a[j])
				str[i] = b[j];
		}
	}
	return (str);
}
