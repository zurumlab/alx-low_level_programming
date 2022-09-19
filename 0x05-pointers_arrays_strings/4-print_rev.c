#include "main.h"
#include <string.h>


/**
 * print_rev - prints reverse of the string
 * @s: the string to be printed in reverse
 * Return: nothing
 */

void print_rev(char *s)
{
int i, n;

n = strlen(s);

for (i = n - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
