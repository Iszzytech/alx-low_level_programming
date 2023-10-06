#include <stdio.h>

/**
 * main - prints the size of various types of computer complied on
 * Return: 0
 */

int main(void)
{

	char my_char;
	int my_int;
	long int a;
	long long int b;
	float my_float;

	printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(my_char));
	printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(my_int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(my_float));
	return (0);

}

