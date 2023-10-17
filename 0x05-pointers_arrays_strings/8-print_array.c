#include "main.h"

/**
 * print_array - print n element of an arr[int]
 * @a: first param as a pointer
 * @n: second param as a int variable
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
