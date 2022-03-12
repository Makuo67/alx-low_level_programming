#include <stdio.h>
#include <time.h>
#include<stdlib.h>

/**
 * main - prints the alphabet in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
return (0);

}
