#include "main.h"

/**
 * _isupper - checks if a charactwr is upppercase or not
 * @c: character to be tested
 * Return: 1 whether it is or not
 */

int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}
return (0);
}
