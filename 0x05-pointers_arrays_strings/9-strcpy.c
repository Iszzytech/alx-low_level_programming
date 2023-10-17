#include "main.h"

/**
 * _strcpy - converts a string to an integer
 * @dest: first function param
 * @src: second function param
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
