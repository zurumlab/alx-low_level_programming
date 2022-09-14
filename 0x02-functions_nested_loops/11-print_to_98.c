#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print integers from 1 to 98
 *
 * @n: the number to begin counting at
 *
 * Return: results
 */

int print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
{
printf("%d, ", n--);
printf("%d\n", n++);
}
}
else
{
{
while (n < 98)
printf("%d, ", n++);
printf("%d\n", n);
}
}
return (0);
}
