#include "main.h"
/**
 * print_array - the program name
 * Description : where n is the number of elements of the array to be printed
 * @a : is the pointer os array
 * @n : is the number of item
 * Return : return void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *a);
		if (i != n - 1)
			printf(", ");
		a++;
	}
	printf("\n");
}
