#include "main.h"

/**
 * _isdigit - checks whether a character is digit or not
 * @c: tested character
 * Return: 1 if it is or otherwise
 */

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
{
return (1);
}
return (0);
}
