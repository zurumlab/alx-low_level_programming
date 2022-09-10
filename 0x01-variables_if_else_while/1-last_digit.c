#include<time.h>
#include<stdlib.h>
#include <stdio.h>

/* main - print the last digit and check check its conditions. */

/**
* Description: using the main function
* this program prints Programming is positive
* return: 0
*/

/* main - print the last digit and check check its conditions. */
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
