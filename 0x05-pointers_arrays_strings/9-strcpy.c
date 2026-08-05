#include "main.h"
/**
 * _strcpy - program name
 * Description : a function that copies the string pointed to by src
 * Return : return dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
