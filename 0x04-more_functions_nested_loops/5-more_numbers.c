#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print numbers 14 time
 * Return: nothing
 */

void more_numbers(void)
{
int r, b;

for (r = 0; r < 10; r++)
{
	for (b = 0; b <= 14; b++)
	{
		if (b > 9)
		{
			putchar((b / 10) + '0');
		}
			putchar((b % 10) + '0');
			}
				putchar(10);
				}
					}
