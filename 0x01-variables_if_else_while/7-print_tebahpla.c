#include <stdio.h>

/**
 * main - Print the lower case alphabets in reverse
 *
 * Return: Always o (Success)
 */
int main(void)
{
char ch;

for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
