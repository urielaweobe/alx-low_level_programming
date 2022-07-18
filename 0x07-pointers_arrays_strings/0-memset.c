#include "main.h"

/**
 * _memset - fill n bytes of memeory with a constant value
 * @s: pointer to memory area
 * @b: constant value
 * @n: number of bytes to fill
 * Return: memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
int i = 0;

while (n > 0)
{
s[i] = b;
n--;
i++;
}
return (s);
}
