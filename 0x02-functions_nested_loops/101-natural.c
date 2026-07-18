#include <stdio.h>
/**
 * main - entry point
 * Description: program to sum /3 and /5 and sum
 * Return: 0
 */
int main(void)
{
	int n = 1024, i, sum = 0;

	for (i = 1; i < n; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
