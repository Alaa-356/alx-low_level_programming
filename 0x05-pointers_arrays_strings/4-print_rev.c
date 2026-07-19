#include "main.h"
/**
 * print_rev - pro name
 * Description: a function that prints a string, in reverse, followed by a \n
 * @s: the variable to be checked
 * Return: void
 */
void print_rev(char *s)
{
	int n = 0, x;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	for (x = n - 1; x >= 0; x--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
