#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: checks if last number number is < 6 >5 or is zero
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
int LastDigit = n % 10;
if (LastDigit > 5)
{
printf("Last digit of %d is %d and and is greater than 5\n", n, LastDigit);
}
else if (LastDigit < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LastDigit);
}
else
{
printf("Last digit of %d is %d and is 0\n", n, LastDigit);
}
return (0);
}
