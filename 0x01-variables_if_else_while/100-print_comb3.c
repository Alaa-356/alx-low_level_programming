#include <stdio.h>
/**
 * main - is the entry point
 * Description: Numbers should be printed in ascending order, with two digits
 * Return: 0
 */

int main(void)
{
	int num, num1;

	for (num = 0; num <= 9; num++)
	{
		for (num1 = num + 1; num1 <= 9; num1++)
		{
			putchar(num + '0');
			putchar(num1 + '0');
			if (!(num == 8 && num1 ==9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
