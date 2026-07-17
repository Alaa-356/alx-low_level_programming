#include "main.h"
/**
 * print_to_98 - entry point
 * Description: a function that prints all natural numbers from n to 98 and /n
 * @n: is variable
 * Return: no return
 */
void print_to_98(int n)
{
	int i;
	if (n <= 98)
	{
		for (i = n; i <= 98; i ++)
			if (n != 98)
			{
				if (n <= 9)
					_putchar(n + '0');
				else
				{
					_putchar((n / 10) + '0');
					_putchar((n % 10) + '0');
				}
			}
	}
	else
	{
		for (i = n; i >= 98; i--)
			if (n <= 9)
				_putchar(n + '0');
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
	}
}
