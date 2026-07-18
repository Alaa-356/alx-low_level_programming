#include "main.h"
/**
 * _isdigit - the program name
 * Discription: a function that checks for a digit (0 through 9).
 * @c: the var to be checked
 * Return: Returns 1 if c is a digit Returns 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 || c <= 9)
		return (1);
	else
		return (0);
}
