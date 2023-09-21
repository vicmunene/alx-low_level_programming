#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to be encoded.
 * Return: A pointer to the modified string.
 */

char *leet(char *str)

{
	int i, j;
	char c[] = "aAeEo0tTIL";
	char d[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (str[i] == c[j])
			{
				str[i] = d[j];
			}
		}
	}
	return (str);
}
