#include <stdio.h>
/**
* main - Prints all possible combinations of single-digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i, j, k;

for (i = 0; i < 10; i++)
{
for (j = i; j < 10; j++)
{
for (k = j; k < 10; k++)
{
putchar(i + '0');
putchar(',');
putchar(' ');
putchar(j + '0');
putchar(',');
putchar(' ');
putchar(k + '0');
putchar(',');
putchar(' ');
}
}
}

return (0);
}

