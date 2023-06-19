#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar('0' + i); /* Print numbers 0-9 */
		}
		else
		{
			putchar('a' + (i - 10)); /* Print letters a-f */
		}
	}

	putchar('\n'); /* Print a new line character */

	return (0);
}

