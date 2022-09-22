#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenate strings
 * @dest: first param
 * @src: second param
 * @n: 3rd param
 * Return: strings
 */

char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
