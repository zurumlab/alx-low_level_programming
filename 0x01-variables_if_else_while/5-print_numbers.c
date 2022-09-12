#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints single digits of base 10 number
 *
 * Description: this program is wriitten by James Chizurum on a low level
 * programminug with c.
 *
 * return : 0
 */

int main(void)
{
	/* delare a variable */
	int i;

	/* create array of character of numbers from 0 to 9 */
	char ch[11] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '\n'};
	/* iterate through the array */
	for (i = 0; i < (int) sizeof(ch); i++)
	{
	putchar(ch[i]);
	}
	return (0);
}
