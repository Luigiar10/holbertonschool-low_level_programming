#include <stdio.h>
/**
* main - entry point
*
* Return 0 (Success)
*/
int main(void)
{
	char c;
	int i;
	long int longint;
	long long int lli;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %d byte(s)\n", sizeof(longint));
	printf("Size of a long long int: %d byte(s)\n", sizeof(lli));
	printf("Size if a float; %d byte(s)\n", sizeof(f));

	return (0);
}
