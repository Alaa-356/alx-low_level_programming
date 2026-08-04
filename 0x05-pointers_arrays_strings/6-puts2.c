#include "main.h"
/**
 * puts2 - is the program name
 * Description : prt evry other char strt  with the first character, fol by \n
 * @str : is the dtring to be checked
 * Return : return void
 */
void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if (i % 2 == 0)
			_putchar(*str);
		str++;
		i++;
	}
	_putchar('\n');
}
