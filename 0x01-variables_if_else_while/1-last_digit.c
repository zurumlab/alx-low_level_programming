#include<time.h>
#include<stdlib.h>
#include <stdio.h>

/**
* main - print last digit of a random number
*
* Description: using the main function
* this program is on low level programming with c
* Return: 0
*/

int main(void)
{
	int num, n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	num = (n % 10);
	if (num > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, num);
	}
	else if (num == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, num);
	}
	else if ((num < 6) && (num != 0))
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, num);
	}
	return (0);
}
