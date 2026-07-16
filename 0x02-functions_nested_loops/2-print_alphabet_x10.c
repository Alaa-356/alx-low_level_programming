#include "main.h"
/**
 * print_alphabet_x10 - to print alphabet acc
 * Description: to print alphabet acc 10 times
 * Return: is 0
 */
void print_alphabet_x10(void)
{
	char let;
	int i = 0;

	for (; i < 10; i++)
	{
		for (let = 'a'; let <= 'z'; let++)
			_putchar(let);
		_putchar('\n');
	}
}
