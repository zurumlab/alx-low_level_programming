#include <stdio.h>

/**
 * main - a function that prints all argurments it recieve
 *@argc: counts the number of arguments provided
 *@argv: array of variables
 *Return: return 0 on succeee
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0;  i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
