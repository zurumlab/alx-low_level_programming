#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabets by 10 times
 *
 * Description: using a defined function
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i, r;

	/* create array of charactere */
	char ch[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g',
	'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q',
	'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\n'};
	/* loop through thei array */
	for (i = 0; i < 10; i++)
	{
	for (r = 0; r < (int) sizeof(ch); r++)
	{
	/* call the _putchar function */
	_putchar(ch[r]);
	}
}
