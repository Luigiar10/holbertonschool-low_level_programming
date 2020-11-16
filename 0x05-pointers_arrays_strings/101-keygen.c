#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - random password generator for 101-crackme
*
* Return: always 0
*/
int main(void)
{
	int x, z, l, j;
	char c[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char p[58];

	srand(time(NULL));
	while (j != 2772)
	{
		x = l = j = 0;
		while ((2772 - 122) > j)
		{
			z = rand() % 62;
			p[x] = c[z];
			j += c[z];
			x++;
		}
		while (c[l])
		{
			if (c[l] == (2772 - j))
			{
				p[x] = c[l];
				j += c[l];
				x++;
				break;
			}
			l++;
		}
	}
	p[x] = '\0';
	printf("%s", p);
	return (0);
}
