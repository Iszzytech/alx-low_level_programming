#include "main.h"

/**
  * _strncat  - the main function
  *
  * @n: Function param
  *
  * @src: Function param
  * @dest: Function param
  *
  * Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int length = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[length + i] = *src;
		src++;
	}

	dest[length + i] = '\0';
	return (dest);
}
