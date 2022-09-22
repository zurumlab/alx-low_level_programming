#include "main.h"
#include <string.h>

/**
 *_strcmp - function that compares to strings
 * @s1: first string
 * @s2: second string
 * Return: results
 */

int _strcmp(char *s1, char *s2)
{

int i = 0, dif = 0;

while (1)
if (s1[i] == '\0' && s2[i] == '\0')
break;
else if (s1[i] == '\0')
{
dif = s2[i];
break;
}
else if (s1[i] == '\0')
{
dif = s1[i];
break;
}
else if (s1[i] != s2[i])
{
dif = s1[i] - s2[i];
break;
}
else
{
i++;
}
return (dif);
}
