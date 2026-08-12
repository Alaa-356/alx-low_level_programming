#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string to be concatenated upon
 * @src: string to be concatenated to dest
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int n = 0, m = 0;

	while (dest[n] != '\0')
		n++;
	while (src[m] != '\0')
	{
		dest[n] = src[m];
		n++;
		m++;
	}
	dest[n] = '\0';
	return (dest);
}
