#include "main.h"

/**
 * swap_int - function to swap value of two integer
 * @a: first param
 * @b: second param
 */

void swap_int(int *a, int *b)
{


	int initial_a_value;
	/* Storing the value of a in a variable */
	initial_a_value = *a;

	/* Swapping the value of a to b */
	*a = *b;

	/* Returning intial a value to b variable */
	*b = initial_a_value;

}
