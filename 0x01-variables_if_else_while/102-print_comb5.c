#include <stdio.h>
/**
 * main - entry point
 * Description: prints all possible combinations of two two-digit numbers.
 * Return: return 0
 */
int main(void)
{
	int num, num1;

	for (num = 0; num <= 99; num++)
	{
		for (num1 = num + 1;num1 <= 99; num1++)
		{
			putchar((num / 10) + '0');
			putchar((num % 10) + '0');
			putchar(' ');
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			if (!(num == 98 && num1 == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
