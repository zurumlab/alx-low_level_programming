#imclude "main.h"

/**
 *_isalpha - checks if result is alphabet
 *
 * @c: is the int for the argument
 *
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= ''z') || (c >= 'A' && c <= 'z'))
	{
	return (1);
	}
	else
	return (0);
}
