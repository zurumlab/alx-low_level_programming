#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that multiples two arguments
 * @argc: argument count
 * @argv: array of varrible
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
int foo, bar;

if (argc != 3)
printf("Error\n");
else
{
foo = atoi(argv[1]);
bar = atoi(argv[2]);

printf("%d\n", bar *foo);
}
return (0);
}
