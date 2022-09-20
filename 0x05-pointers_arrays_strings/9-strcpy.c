#include "main.h"

/**
 * *_strcpy - copy paste string
 *
 * @dest: destination
 * @src: source
 *
 * Return:nothing
 */

char *_strcpy(char *dest, char *src)
{
int it = 0;

while (*(src + it) != '\0')
{
*(dest + it) = *(src + it);
it++;
}
*(dest + it) = '\0';

return (dest);
}
