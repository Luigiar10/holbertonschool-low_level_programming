/**
* infinite_add - Prototype
*
* @n1: number 1
* @n2: number 2
*
* @r: result
* @n: size
*
* Return: result
*/
char *infinite_add(char *n1, char *n2, char *r, int n)
{
	int tam1 = 0, tam2 = 0;
	int ad = 0;
	int x = n - 2;

	while (n1[tam1 + 1] != 0)
		tam1++;
	while (n2[tam2 + 1] != 0)
		tam2++;
	r[n - 1] = 0;

	while (x >= 0 && (tam1 >= 0 || tam2 >= 0))
	{
		ad += (tam1 < 0 ? '0' : n1[tam1]) + (tam2 < 0 ? '0' : n2[tam2]);
		ad -= 2 * '0';
		r[x] = ad % 10 + '0';
		ad /= 10;
		x--;
		tam1--;
		tam2--;
	}

	if ((x < tam1 || x < tam2) || (x < 0 && ad))
	return (0);

	ad ? r[x] = ad + '0' : 1;
	x += ad ? 0 : 1;

	return (r + x);
}
