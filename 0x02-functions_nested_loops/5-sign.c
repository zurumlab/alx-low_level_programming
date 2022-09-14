#include "main.h"

/**
 * print_sign - prints values expected
 *
 * @n: the int value expected
 *
 * Return: 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}
