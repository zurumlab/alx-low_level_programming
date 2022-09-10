#include<time.h>
#include<stdlib.h>

/**
* main - print if the number is positive,zero,
*
* Description: using the main function
* this program prints "Programming is positive
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	/*random number generation*/
	n = rand() - RAND_MAX / 2;
	/*this code generate the last digit*/
	int lastDigit = (n % 10);
	/*make your decision here*/
	if (lastDigit > 5)
	{
	printf("Last digit of %d is %d\n\n and is greater than 5", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
	printf("Last digit of %d is %d\n\n and is 0", n, lastDigit);
	}
	else if ((lastDigit < 6) && (lastDigit != 0))
	{
	printf("Last digit of %d is %d\n\n and is less
	than 6 and not 0", n, lastDigit);
	}
	return (0);
}
