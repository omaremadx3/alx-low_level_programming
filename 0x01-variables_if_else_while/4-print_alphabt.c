#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints letters form a to z
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter == q || letter == e)
{
continue;
}
putchar(letter);
}
putchar('\n');
return (0);
}
