#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints whether a random number is positve
 * or negative
 * Return: 0
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
    print("%d is positive\n", n);
}
else if (n < 0)
{
    print("%d is negative\n", n);
}
else
{
    print("%d is zero\n", n);
}

return (0);
}