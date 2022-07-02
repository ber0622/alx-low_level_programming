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

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(ll));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(d));
return (0);
}
