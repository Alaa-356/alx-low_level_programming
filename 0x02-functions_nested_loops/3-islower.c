#include "main.h"
/**
 * _islower - to print alphabet ac
 * Description:  function that checks for lowercase character.
 * @c: is variable take from the other function
 * Return: is 1 if lower and 0 otherwise
 */
int _islower(int c)
{
	int i = 97;

	for (; i <= 122; i++)
		if (c == i)
			return (1);
	return (0);
}
