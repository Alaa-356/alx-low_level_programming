#include "main.h"
/**
 * _puts - pro name
 * Description: function that prints a string followed by a new line to stdout.
 * @str: the variable to be checked
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
