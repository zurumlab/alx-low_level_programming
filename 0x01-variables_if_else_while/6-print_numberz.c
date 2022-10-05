#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - print base 10 numbers from 0  to 9 on a new line
 * this code is  written by James Chizurum on 12, september, 2022
 *
 * Description: as putchar function is called, it will the result
 *
 * Return: 0
 */

int main(void)
{
	/* declare a variable of type int */
	int num;

	/* create a for loop that will itterate numbers from 0 to 10 */
	for (num = 0; num < 10; num++)
	{
	/* add zero to num in order to extract the ASCII value of each number */
	putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
