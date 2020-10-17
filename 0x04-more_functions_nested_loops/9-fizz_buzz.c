#include <stdio.h>
/**
  * main - this function count 0 to 1 and print fizz and buzz.
  *
  * Return: is 0
  */
int main(void)
{
	int filter;

	for (filter = 1; filter <= 100; filter++)
	{
		if ((filter % 5 == 0) && (filter % 3 == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			if (filter % 3 == 0)
			{
				printf("Fizz");
			}
			else
			{
				if (filter % 5 == 0)
				{
					printf("Buzz");
				}
				else
				{
					printf("%d", filter);
				}
			}
		}
		if (filter != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}

