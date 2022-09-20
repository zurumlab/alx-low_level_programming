#include "main.h"
#include <stdio.h>

/**
 * print_array - print array of items
 * @a: array
 * @n: number of items
 * Return: nothing
 */

void print_array(int *a, int n)
{
int it;

for (it = 0; it < n; it++)
{
if (it != (n - 1))
printf("%d, ", a[it]);
else
printf("%d", a[it]);
}
putchar(10);
}
