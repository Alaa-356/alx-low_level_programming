#include "main.h"
/**
 * rev_string - pro name
 * Description: a function that reverses a string.
 * @s: is variable to be checked
 * Return: void
 */
void rev_string(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++, s++)
		;
	s--;
	for (; i > 0; i--, s--)
		printf("%c", *s);
}
