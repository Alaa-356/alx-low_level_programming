#include "main.h"
/**
 * print_alphabet - to print alphabet acc
 * Description: to print alphabet acc
 * Return: is 0
 */
void print_alphabet(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
		_putchar(let);
	_putchar('\n');
}
