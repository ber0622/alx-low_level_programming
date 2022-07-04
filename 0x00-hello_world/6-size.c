#include <stdio.h>

/**
 * main - prints the size of the various types
 * Return: Always 0 if successful
 */
int main(void)
{
	char charType;
	int intType;
	long longint;
	long long longlongint;
	float floatType;

	printf("Size of a char: %d byte(s)\n", sizeof(charType));
	printf("Size of an int: %d byte(s)\n", sizeof(intType));
	printf("Size of a long int: %d byte(s)\n", sizeof(longint));
	printf("Size of a long long int: %d byte(s)\n", sizeof(longlongint));
	printf("Size of a float: %d byte(s)\n", sizeof(floatType));
	return (0);
}
