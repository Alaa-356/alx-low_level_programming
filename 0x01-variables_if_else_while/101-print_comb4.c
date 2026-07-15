#include <stdio.h>
/**
 * main - is the entry point
 * Description: Numbers must be separated by followed by a space
 * Return: 0
 */

int main(void)
{
	int num, num1, num2;

	for (num = 0; num <= 9; num ++)
	{
		for (num1 = num + 1; num1 <= 9; num1++)
		{
			for (num2 = num1 + 1; num2 <= 9; num2++)
			{
				putchar(num + '0');
				putchar(num1 + '0');
				putchar(num2 + '0');
				if (!(num == 7 && num1 == 8 && num2 == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
