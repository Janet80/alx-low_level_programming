#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: Assigns a random number to the variable n
 * and prints the last digit of n along with an appropriate message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	srand(time(NULL));
	int n = rand();
	int lastDigit = n % 10;

	printf("The string Last digit of %d is ", n);

	if (lastDigit > 5)
	{
		printf("%d and is greater than 5\n", lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("%d and is 0\n", lastDigit);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", lastDigit);
	}

	return (0);
}

