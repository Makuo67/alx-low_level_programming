#include <stdio.h>

/**
 * main - print all possible combination of single digit numbers
 *
 * Return: Always o (Success)
 */
int main(void)
{
int n;

for (n = 48; n < 58; n++)
{
putchar(n);
if (n != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
