#include "main.h"

/**
 * factorial - calculte factorial of numbers
 * @n: number
 *
 *Return: number
 */

int factorial(int n)
{
int next_fact;
if (n < 0)
return (-1);
else if (n == 0)
return (1);
next_fact = factorial(n - 1);
return (n * next_fact);
}
