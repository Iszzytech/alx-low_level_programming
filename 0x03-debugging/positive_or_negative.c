#include "main.h"

/**
* positive_or_negative - function to return value
* Description: Checks if a number is postive or not
* int i - This is the value we're checking
*/


void positive_or_negative(int i)
{

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}

	if (i == 0)
	{
		printf("%d is zero\n", i);
	}

	if (i < 0)
	{
		printf("%d is negative\n", i);
	}

}
