#include <stdio.h>
/**
 * main - is the entry point
 * Description: print alphabet in lowercasein reverse a new line.
 * Return: 0
 */

int main(void)
{
	char ch = 'z';

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
