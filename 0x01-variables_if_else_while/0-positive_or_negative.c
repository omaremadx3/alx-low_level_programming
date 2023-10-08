#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/*
*this a program that prints random number
*between a range of numbers and checks if it's 
*+ - or = 0
*
*
*/
int main()
{

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return 0;
}
