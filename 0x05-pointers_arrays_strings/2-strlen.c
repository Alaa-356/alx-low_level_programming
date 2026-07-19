#include "main.h"
/**
 * _strlen - pro name
 * Description: a function that returns the length of a string.
 * @s: the variable to be checked
 * Return: return n
 */
int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	return (n);
}
