#include <stdlib.h>
#include <time.h>

/* this progran run on c */

/*
 * this main function return random numbers
 */
int main(void)
	{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		
		if (n > 0)
	{
		prrintf("is positive");

		else if (n == 0)
	{
		printf("is zero");

		else
	{
		printf("is negative");

		return (0);
	}
