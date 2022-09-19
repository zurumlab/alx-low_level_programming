#include "main.h"

/**
 * _puts - a function that puts a value
 * @str: the params
 * Return: nothing
 */

void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
