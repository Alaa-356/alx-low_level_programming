#include "main.h"
/**
 * _atoi - is the fun name
 * Describtion: a function that convert a string to an integer.
 * @s: is variable string to change to int
 * Return: the value in int
 */
int _atoi(char *s)
{
	unsigned int i = 0;
	int sign = 1;

	while (*s != '\0')
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			i = (i * 10) + (*s - '0');
		else if (i > '9')
			break;
		s++;
	}
	return (i * sign);
}
