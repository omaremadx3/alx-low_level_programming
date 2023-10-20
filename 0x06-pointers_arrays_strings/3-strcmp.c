#include "main.h"
/**
 * _strcmp - compare srings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: 0 less than 0 or greater
 */
int _strcmp(char *s1, char *s2)
{
int x = 0, y, z;
while (s1[x] != '\0' || s2[x] != '\0')
{
x++;
}
for (y = 0; y < x; y++)
{
if (s1[y] != s2[y])
{
z = s1[y] - s2[y];
return (z);
}
}
return (0);
}
