#include "main.h"

/**
 *_strlen_recursion - calculate length of string
 *@s: string to be used
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
int sum = 0;

if (sum != '\0')
{
sum++;
sum += _strlen_recursion(s + 1);
}
return (sum);
}
