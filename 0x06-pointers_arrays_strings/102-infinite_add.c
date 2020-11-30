/**
* infinite_add - entry point
*
* @n1: arguments
* @n2: arguments
* @r: arguments
* @n: arguments
*
* Return: Pointer
*/
char *infinite_add(char *n1, char *n2, char *r, int n)
{
	int tam1 = 0, tam2 = 0;
	int max = 0;
	int x = n - 2;

	while (n1[tam1 + 1] != 0)
		tam1++;
	while (n2[tam2 + 1] != 0)
		tam2++;
	r[n - 1] = 0;

	while (x >= 0 && (tam1 >= 0 || tam2 >= 0))
	{
		max += (tam1 < 0 ? '0' : n1[tam1]) + (tam2 < 0 ? '0' : n2[tam2]);
		max -= 2 * '0';
		r[x] = max % 10 + '0';
		max /= 10;
		x--;
		tam1--;
		tam2--;
	}

	if ((x < tam1 || x < tam2) || (x < 0 && max))
	return (0);

	max ? r[x] = max + '0' : 1;
	x += max ? 0 : 1;

	return (r + x);
}
