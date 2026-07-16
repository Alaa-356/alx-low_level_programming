#include "main.h"
/**
 * print_last_digit - to print alphabet ac
 * Description:  print the last number
 * @n: is variable take from the other function
 * Return: o
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
		n = n * -1;
	_putchar(n + '0');
	return (n);
}
