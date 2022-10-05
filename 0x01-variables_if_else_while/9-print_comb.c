#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main- prints result
 *
 * Description: using putchar
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	putchar((i +'0') + ',');
	}
	return (0);
}
