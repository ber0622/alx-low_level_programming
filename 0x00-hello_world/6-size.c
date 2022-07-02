#include <stdio.h>

/**
 * main - prints the size of the various types
 *
 * Return: Always 0 if successful
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int ll;
	float d;

printf("Size of a char: %d byte(s)\n", sizeof(c));
printf("Size of a int: %d byte(s)\n", sizeof(i));
printf("Size of a long int: %d byte(s)\n", sizeof(l));
printf("Size of a long long int: %d byte(s)\n", sizeof(ll));
printf("Size of a float: %d byte(s)\n", sizeof(d));

return (0);

}
