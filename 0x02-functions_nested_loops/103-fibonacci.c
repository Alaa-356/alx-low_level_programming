#include <stdio.h>
/**
 * main - entry point
 * Description: program that prints the first 50 Fibonacci numbers,
 *              and sum only even number
 * Return: 0
 */
int main(void)
{
	unsigned long x = 1, y = 2, fib, sum = 2;
	int i;

	for (i = 3; i <= 50; i++)
	{
		fib = x + y;
		if (fib >= 4000000)
			break;
		if (fib % 2 == 0)
			sum += fib;
		x = y;
		y = fib;
	}
	printf("%lu", sum);
	printf("\n");
	return (0);
}
