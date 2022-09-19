#include "main.h"

/**
 * swap_int - swaps values of two integer
 * @a: the first number
 * @b: the second param
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
int tmp;

tmp = *a;
*a = *b;
*b = tmp;
}
