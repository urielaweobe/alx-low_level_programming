#include "main.h"

/**
 * _isalpha - Entry point to recieve chars
 * @c: Recieve the character
 * 
 * Desc: Returns 1 if c is a letter, lowercase or uppercase
 * Returns 0 otherwise
 * Return: 0
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
