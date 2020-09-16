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
	long int li;
	long long int lli;
	float f;

	printf("Size of char: %d", sizeof(c));
	printf("Size of int: %d", sizeof(i));
	printf("Size of long int: %d", sizeof(li));
	printf("Size of long long int: %d", sizeof(lli));
	printf("Size if float; %d", sizeof(f));
	return (0);
}
