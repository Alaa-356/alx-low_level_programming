#include <stdio.h>
/**
 * main - entry point
 * Description: program that prints the first 50 Fibonacci numbers,
 *              starting with 1 and 2, followed by a new line.
 * Return: 0
 */
int main(void)
{
	unsigned long x = 1, y = 2, fib;
	int i;

	printf("%lu, %lu", x, y);
	for (i = 3; i <= 50; i++)
	{
		fib = x + y;
		printf(", %lu", fib);
		x = y;
		y = fib;
	}
	printf("\n");
	return (0);
}
