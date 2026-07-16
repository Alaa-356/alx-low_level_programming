#include "main.h"
/**
 * jack_bauer - entry point
 * Description: prints all minute of the day of Jack Bauer 00:00 to 23:59.
 * Return: o
 */
void jack_bauer(void)
{
	int i, j, x;

	for (x = 0; x <= 23; x++)
		for (i = 0; i <= 5; i++)
			for (j = 0; j <= 9; j++)
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
				_putchar(':');
				_putchar(i + '0');
				_putchar(j + '0');
				_putchar('\n');
			}
}
