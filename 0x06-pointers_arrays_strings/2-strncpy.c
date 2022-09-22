#include "main.h"
#include <string.h>

/**
 * _strncpy - a function for copying
 * @dest: param
 * @src: param
 * @n: param
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
