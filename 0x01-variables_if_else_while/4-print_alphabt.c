#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: function prints lowercase letters 'a' to 'z' from 'a' to 'z'
 * except for 'e' and 'q', followed newline charactr
 *
 * Return: Always 0 (Success)
 */


int main(void)

{
	char letter = 'a';

	while (letter <= 'z')
	{
	if (letter != 'e' && letter != 'q')
	{
	putchar(letter);
	}
	letter++;
	}
	putchar('\n');
	return (0);
}
