#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - printts results
 *
 * Description: using putchar
 *
 * Return: 0
 */

int main(void)
{
	int r;

	char ch[17] = {'0', '1', '2', '3', '4', '5',
	'6', '7', '8', '9', 'a', 'b', 'c',
	'd', 'e', 'f',  '\n'};
	/* loop*/
	for (r = 0; r < (int) sizeof(ch); r++)
	{
	putchar(ch[r]);
	}
	return (0);
}
