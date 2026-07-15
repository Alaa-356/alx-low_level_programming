#include <stdio.h>
/**
 * main - is the entry point
 * Description: print alphabet in lowercaseand uppercase and new line.
 * Return: 0
 */

int main(void)
{
	char ch = 'a',CH = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (CH = 'A'; CH <= 'Z'; CH++)
		putchar(CH);
	putchar('\n');
	return (0);
}
