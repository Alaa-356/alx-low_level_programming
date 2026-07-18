#include "main.h"
/**
 * print_line - pro name
 * Description: Where n is the number of times the character _should be printed
 * @n: is the var to be checked
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
