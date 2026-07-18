#include "main.h"
/**
 * _isupper - is the program name
 * Discription: a function that checks for uppercase character.
 * @c: is var to be checked
 * Return: Returns 1 if c is uppercase  Returns 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' || c <= 'Z')
		return (1);
	return (0);
}
