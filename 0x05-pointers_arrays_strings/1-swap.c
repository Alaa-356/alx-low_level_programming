#include "main.h"
/**
 * swap_int - pro name
 * Description: a function that swaps the values of two integers.
 * @a: the variable to be swaped with b
 * @b: same swap
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
