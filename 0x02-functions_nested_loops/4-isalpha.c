#include "main.h"
/**
 * _isalpha - to print alphabet ac
 * Description:  function that checks for lowercase character.
 * @c: is variable take from the other function
 * Return: is 1 if letter weather low or upp and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
