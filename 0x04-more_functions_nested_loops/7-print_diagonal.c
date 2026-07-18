#include "main.h"
/**
 * print_diagonal - pro name
 * Description: function that draws a diagonal line on the terminal.
 * @n: is the var to be checked
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
				{
					_putchar('\\');
					break;
				}
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
