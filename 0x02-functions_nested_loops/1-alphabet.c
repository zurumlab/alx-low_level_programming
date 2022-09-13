#include "main.h"

/**
 * print_alphabet - prints results expected
 *
 * Description: using declared functions
 *
 * Return:0
 */
void print_alphabet(void)
{
	int i;

	/* create array of characters */
	char c[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
	'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
	'y', 'z', '\n'};
	/* iterate through the array and print each character */
	for (i = 0; i < (int) sizeof(c); i++)
	{
	/* call the _putchar() function you declared in main.h package */
	_putchar(c[i]);
	}
}


