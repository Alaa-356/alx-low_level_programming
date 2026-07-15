#include <stdio.h>
/**
 * main - is the entry point
 * Description: print unmber by putchar
 * Return: 0
 */

int main(void)
{
	int num = 0;

	for (num = 0; num <= 9; num++)
		putchar(num + '0');
	putchar('\n');
	return (0);
}
