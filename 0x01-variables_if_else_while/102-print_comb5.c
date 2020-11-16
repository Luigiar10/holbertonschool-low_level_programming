#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
	int x = 0;
	int z = 0;
	int max[2] = {0, 0};
	int num[4] = {0, 0, 0, 0};

	for (z = 0; z < 100; z++)
	{
		for (x = 0; x < 100; x++)
		{
			if (x != z)
			{
				max[0] = (z * 100) + x;
				max[1] = (x * 100) + z;

				num[0] = z / 10;
				num[1] = z % 10;
				num[2] = x / 10;
				num[3] = x % 10;

				if (max[0] < max[1])
				{
					putchar(num[0] + '0');
					putchar(num[1] + '0');
					putchar(32);
					putchar(num[2] + '0');
					putchar(num[3] + '0');

					if ((x != 99) || (z != 98))
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}