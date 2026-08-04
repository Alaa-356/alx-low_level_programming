#include "main.h"
/**
 * puts_half - the program name
 * Description : function that prints half of a string, followed by a new line
 * @str : is the string to be printed
 * Return : return void
 */
void puts_half(char *str)
{
	int i, len;

	for (i = 0; str[i] != '\0'; i++)
		;
	len = i / 2;
	for (; str[len] != '\0'; len++)
		_putchar(str[len]);
	_putchar('\n');
}
