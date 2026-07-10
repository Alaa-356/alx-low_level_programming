#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: this program to show last digit is pos or neg
 * Return: return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n = n % 10;
	if (n > 0)
		printf("%d is positive\n", n);
	else
	{
		if (n < 0)
			printf("%d is negative\n", n);
		else
			printf("%d is zero\n", n);
	}
	return (0);
}
