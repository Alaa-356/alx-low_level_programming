#include "main.h"
/**
 * main - entry point
 * Decription: to print _putchar folowed by new line
 * Return: return 0
 */
int main(void)
{
	int i;
	char str[] = "_putchar";

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
	return (0);
}
