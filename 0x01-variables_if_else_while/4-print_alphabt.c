#include <stdio.h>
#include <ctype.h>

/**
* main - prints all alphebets in lowercase
* except q and e
*
* Description: using the main function
* this program is on low level programming with c
*
* Return: 0
*/

int main(void)
{
	int i;

	/* store the characters in array */
	char ch[25] = {'a', 'b', 'c', 'd', 'e', 'f', 'g',
	'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
	'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\n'};
	for (i = 0; i < (int) sizeof(ch); i++)
	{
	putchar((ch[i]));
	}
	return (0);
}
