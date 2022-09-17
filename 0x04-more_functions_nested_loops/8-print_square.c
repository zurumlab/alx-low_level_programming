#include <stdio.h>
#include "main.h"

/**
 * *print_square - prints squares
 * *@size: params
 * Return: nothing
 */

void print_square(int size)
{
int i, r;

if (size > 0)
{
for (i = 0; i < size; i++)
{
for (r = 0; r < (size - 1); r++)
{
putchar('#');
}
putchar('#');
putchar('\n');
}
}
else
putchar('\n');
}

