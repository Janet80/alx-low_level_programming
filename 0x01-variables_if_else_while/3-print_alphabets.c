#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase,
 *              followed by uppercase, and a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	/* Print lowercase alphabet */
	for (int i = 0; i < 26; i++)
	{
		putchar(lowercase);
		lowercase++;
	}

	/* Print uppercase alphabet */
	for (int i = 0; i < 26; i++)
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar('\n');

	return (0);
}

