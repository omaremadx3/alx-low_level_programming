#include "main.h"
/**
 * _strcmp - compare srings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: 0 less than 0 or greater
 */
int _strcmp(char *n1, char *n2)
{
int i = 0, y, z;
while (n1[i] != '\0' || n2[i] != '\0')
{
i++;
}
for (y = 0; y < i; y++)
{
if (n1[y] != n2[y])
{
z = n1[y] - n2[y];
return (z);
}
}
return (0);
}
