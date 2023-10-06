#include <stdio.h>
/**
 * main - Entry point
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of int: %zu bytes\n", sizeof(int));
	printf("Size of int: %zu bytes\n", sizeof(float));
	printf("Size of int: %zu bytes\n", sizeof(double));
	printf("Size of int: %zu bytes\n", sizeof(char));
	printf("Size of int: %zu bytes\n", sizeof(unsigned int));
	return (0);
}
