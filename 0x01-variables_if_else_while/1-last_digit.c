#include<time.h>
#include<stdlib.h>
#include <stdio.h>

/**
* main - print if the number is positive,zero,
*
* Description: using the main function
* this program prints "Programming is positive
*return: 0
*/
int main(void)
{
	int n;
	int m;

	srand(time(0));
	/*random number generation*/
	n = rand() - RAND_MAX / 2;
	/*this code generate the last digit*/
	 m = (n % 10);
	/*make your decision here*/
	if (m > 5)
	{
	pirintf("Last digit of %i is %i and is greater than 5\n", n, m);
	}
	else if (m == 0)
	{
	printf("Last digit of %i is %i and is 0\n", n, m);
	}
	else if ((m < 6) && (m != 0))
	{
	printf("Last digit of %i is %i and is less
	than 6 and not 0\n", n, m);
	}
	return (0);
i}
