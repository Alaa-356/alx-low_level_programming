#include <stdio.h>
/**
 * main - is the entry point
 * Description: print alphabet in lowercaseand except e and q new line
 * Return: 0
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
