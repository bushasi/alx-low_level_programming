#include <stdio.h>

/**
 * main - prints out sizes of data types in C
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %zu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a int: %zu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %zu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %zu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %zu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
