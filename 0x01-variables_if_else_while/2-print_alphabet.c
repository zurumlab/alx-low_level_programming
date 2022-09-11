#include <stdio.h>
#include <stdlib.h>

/**
* main - print charaters by using putchar function
*
* Description: using the main function
* this program is on low level programming with c
* Return: 0
*/

int main(void)
{
	int i;

	/* store the characters in array */
	char ch[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g',
	'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q',
	'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\n'};
	/* loop through the array */
	for (i = 0; i < (int) sizeof(ch); i++)
	{
	putchar(ch[i]);
	}
	return (0);
}
