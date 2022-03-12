#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints tha alphabet in lower case, then in upper case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;

for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
