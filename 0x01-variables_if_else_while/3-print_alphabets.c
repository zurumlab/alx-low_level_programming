#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - prints the alphabet in lowercase, and
* then in uppercase, followed by a new line.
*
* Description: using the main function
* this program is on low level programming with c
* Return: 0
*/

int main(void)
{
	int i, r;
	/* store the characters in array */
	char ch[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g',
	'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q',
	'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	/* create another array of characters */
	char ch2[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g',
	'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q',
	'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',\n};
	/* loop through the first  array and print small letters */
	for (i = 0; i < (int) sizeof(ch); i++)
	{
	putchar((ch[i]));
	}
	/* loop through the second array and print capital letters */
	for (r = 0; r < (int) sizeof(ch2); r++)
	{
	putchar(toupper(ch2[r]));
	}
	return (0);
}
