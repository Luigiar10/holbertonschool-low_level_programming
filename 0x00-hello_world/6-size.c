#include <stdio.h>
/**
* main - Entry point
*
* Return Always 0 (Success)
*/
int main(void)
{
	char c;
	int i;
	long long int lli;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(lli));
	printf("Size if a float; %d byte(s)\n", sizeof(f));

	return (0);
}
