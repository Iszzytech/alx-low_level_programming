#include "main.h"

/**
  * _memset - main function
  *
  * @b: The value used to fill the memory
  *
  * @s: Function param
  *
  * @n: Function param
  *
  * Return: s
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	s[a] = b;
	return (s);
}

