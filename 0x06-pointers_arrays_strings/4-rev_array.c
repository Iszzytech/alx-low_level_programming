#include "main.h"

/**
  * reverse_array - The main faunction
  *
  * @a: Function param
  *
  * @n: Function param
  *
  * Return: Always 0
  */

void reverse_array(int *a, int n)
{
	int k, r;

	for (k = 0; k < n--; k++)
	{
	r = a[k];
	a[k] = a[n];
	a[n] = r;
	}
}
