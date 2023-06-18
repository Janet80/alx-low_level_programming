#include <unistd.h>
#include <string.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1 (error)
 */
int main(void)
{
	char *message = "that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	size_t length = strlen(message);

	write(2, message, length);
	return (1);
}


