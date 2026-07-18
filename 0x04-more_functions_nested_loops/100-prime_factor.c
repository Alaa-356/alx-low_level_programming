#include <stdio.h>
/**
 * main - entry point
 * Description: prime
 * Return: void
 */
int main(void)
{
	unsigned long n = 612852475143, i;

	for (i = 2; i * i <= n; i++)
		while (n % i == 0)
		{
			n = n / i;
		}
	if (n > 1)
		printf("%lu", n);
	printf("\n");
	return (0);
}
