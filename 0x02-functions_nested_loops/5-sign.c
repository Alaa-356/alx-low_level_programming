#include "main.h"
/**
 * print_sign - to print alphabet ac
 * Description:  function that checks for lowercase character.
 * @n: is variable take from the other function
 * Return: is 1 and + if > 0, 0 if equal 0, -1 and - if < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
		_putchar('-');
	return (-1);
}
