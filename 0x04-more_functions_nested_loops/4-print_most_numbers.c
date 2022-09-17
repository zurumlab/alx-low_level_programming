#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - print numbers except 2 and 4
 * Return: nothing
 */

void print_most_numbers(void)
{
int i;

for (i =48; i < 58; i++)
{
if (i == 50 || i == 52)
{
continue;
}
putchar(i + '0');
}
}
