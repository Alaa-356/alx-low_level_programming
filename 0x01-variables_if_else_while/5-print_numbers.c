#include <stdio.h>
/**
 * main - is the entry point
 * Description: prints number from 0 to 9 and new line
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
