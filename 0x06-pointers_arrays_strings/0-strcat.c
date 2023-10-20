#include "main.h"
/**
 * _strcat - Concatenate two strings
 * @dest: The destination string
 * @src: The source string to append
 *
 * Return: Pointer to the resulting string
 */
char *_strcat(char *dest, const char *src)
{
char *result = dest;
while (*dest)
dest++;
while (*src)
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';
return result;
}
