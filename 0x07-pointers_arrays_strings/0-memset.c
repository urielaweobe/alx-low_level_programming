#include "main.h"

/**
 * _memset - fill n bytes of memeory with a constant value
 * @s: pointer to memory area
 * @b: constant value
 * @n: number of bytes to fill
 * Return: memory area
 */

 chat *_memset(char *s, char b, unsigned int n)
{
int size = n; /* only accept positive sizes */

if (size > 0)
{
int i;

for (i = 0; i < size, i++)
s[i] = b;
}

return (s);
}
