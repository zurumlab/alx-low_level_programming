#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/**
* main - print if the number is positive, zero,
* 
* Description: using the main function
* this program prints "Programming is positive
* Return: 0
*/
int main()
{
    int n;
    
    srand(time(0));
    n = rand() - RAND_MAX / 2;
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
