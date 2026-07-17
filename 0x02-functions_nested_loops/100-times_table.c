#include "main.h"
/**
 * print_times_table - is the program name
 * Decription: If n is greater than 15 or less than 0
 *             the function should not print anything
 * @n: the vriable to be checked
 * Return: is void
 */
void print_times_table(int n)
{
	int i, j, x;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (i == 0 || j == 0)
			{
				if (j == n)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0');
				}
				else
				{
					if (i == 0)
					{
						_putchar('0');
						_putchar(',');
					}
				}
			}
			else
			{
				x = i * j;
				if (j == n)
					printf("%3d", x);
				else
					printf("%3d, ", x);
			}
		}
		printf("\n");
	}
}
