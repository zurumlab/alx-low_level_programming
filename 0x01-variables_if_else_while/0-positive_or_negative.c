include<stdio.h>
#include<time.h>
#include<stdlib.h>


/**
 * main - print if the number is positive, zero, or positve
 *
 * Description: using the main function
 * this programm prints "Programming is positive, zero, or, negative
 * Return: 0
 */
int main()
{
    int n;
    srand(time(0));
    n = rand() - RAND_MAX / 2;

    	/* your code goes there */

    if(n > 0)
    {
     printf("%i is Positive\n",  n);
    
    }
    else if(n == 0)
    {
        printf("%i is Zero\n", n);
        
    }
    else
    {
        printf("%i is Negative\n", n);
        
    }
    return 0;
}
