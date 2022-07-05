#include "main.h"

/**
 * _islower - Entry point to recieve chars
 * @c: Recieve the character
 *
 * Desc: Return 1 if the letter is lowercase and 0 if is Uppercase.
 * Return: 0
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
