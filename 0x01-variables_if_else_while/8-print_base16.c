#include <stdio.h>
/**
 * main - is the entry point
 * Description: prints number from 0 to 15 in hexa and new line
 * Return: 0
 */
int main(void)
{
	char ch = '0';

	for (ch = '0'; ch <= 'f'; ch++)
	{
		if (ch > '9' && ch < 'a')
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
