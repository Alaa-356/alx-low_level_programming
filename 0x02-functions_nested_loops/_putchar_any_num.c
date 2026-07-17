#include "main.h"
/**
 * _putchar_any_num - is the program name
 * Description: to print any number with _putchar
 * @n: is the var
 * Return: void
 */
void _putchar_any_num(int n)
{
	if (n >= 10)
		_putchar_any_num(n / 10);
	_putchar((n % 10) + '0');
}
