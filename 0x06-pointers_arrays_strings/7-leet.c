#include "main.h"

/**
 * leet - encode a string
 * @Str: the string to encode
 * Return: encoded string
 */
char *leet(char *Str)
{
int i, x;
char ReplacedChars[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char leet[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
for (i = 0; Str[i] != '\0'; i++)
{
for (x = 0; x < 10; x++)
{
if (ReplacedChars[x] == Str[i])
{
Str[i] = leet[x];
}
}
}
return (Str);
}
