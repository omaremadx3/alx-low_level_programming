#include "main.h"

/**
 * reverse_array - a function that reverse an array
 * @a: array
 * @n: elements number
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i = 0;
int y;
while (i < n / 2)
{
y = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = y;
i++;
}
}
