#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - pronts lettersvreversly
 *
 * Description: using putchar function
 *
 * Return: 0
 */

int main(void)
{

	int i;

	char ch[27] = {'z', 'y', 'x', 'w', 'v', 'u', 't', 's', 'r', 'q',
	'p', 'o', 'n', 'm', 'l', 'k', 'j', 'i', 'h', 'g', 'f', 'e', 'd',
	'c', 'b', 'a', '\n'};
	/* loop */
	for (i = 0; i < (int) sizeof(ch); i++)
	{
	putchar(ch[i]);
	}
	return (0);
}
