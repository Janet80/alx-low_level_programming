#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point of the program
*
* Description: Assigns a random number to the variable n and prints
* whether the number is positive, negative, or zero.
*
* Return: 0 on success
*/
int main(void)
{
srand(time(0));
int n = rand();

printf("The number %d is ", n);

if (n > 0)
{
printf("positive\n");
}
else if (n == 0)
{
printf("zero\n");
}
else if (n == 0)
{
printf("negative\n");
}

return (0);
}

