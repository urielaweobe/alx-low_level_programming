#include "main.h"

/**
 * swap_int -Function to swap values
 * @a: A value to swap
 * @b: A value to swap
 * Return: int
 */

void swap_int(int *a, int *b)
{
int tmp = *a;

*a = *b;
*b = tmp;
}
