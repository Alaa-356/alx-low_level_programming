#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: string to be concatenated upon
 * @src: string to be concatenated to dest
 * @n: the num of taken letter from src
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, m;

	while (dest[x] != '\0')
		x++;
	for (m = 0; m < n; m++)
	{
		if (src[n] == '\0')
			break;
		else
		{
			dest[x] = src[m];
			x++;
		}
	}
	dest[x] = '\0';
	return (dest);
}
