#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i, j;
for (i = 0; i <= 99; i++)
{
for (j = i; j <= 99; j++)
{
int tens_i = i / 10;
int ones_i = i % 10;
int tens_j = j / 10;
int ones_j = j % 10;
putchar('0' + (tens_i / 10));
putchar('0' + (tens_i % 10));
putchar('0' + (ones_i / 10));
putchar('0' + (ones_i % 10));
putchar(' ');
putchar('0' + (tens_j / 10));
putchar('0' + (tens_j % 10));
putchar('0' + (ones_j / 10));
putchar('0' + (ones_j % 10));
if (j != 99)
{
putchar(',');
putchar(' ');
}
}
}

return (0);
}

