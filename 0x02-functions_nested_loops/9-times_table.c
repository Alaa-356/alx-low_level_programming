#include "main.h"
/**
 * times_table - entry point
 * Description: function that prints the 9 times table, starting with 0
 * Return: o
 */
void times_table(void)
{
	int i, j, res;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			res = i * j;
			if (j == 0)
				printf("%d", res);
			else
				printf(", %2d", res);
		}
		printf("\n");
	}
}
