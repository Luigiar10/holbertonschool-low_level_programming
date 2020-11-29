#include "holberton.h"
#include <stdlib.h>
/**
 * wrdcnt - entry point
 *
 * @s: arguments
 *
 * Return: z
 */
int wrdcnt(char *s)
{
	int x, z = 0;

	for (x = 0; s[x]; x++)
	{
		if (s[x] == ' ')
		{
			if (s[x + 1] != ' ' && s[x + 1] != '\0')
				z++;
		}
		else if (x == 0)
			z++;
	}
	z++;
	return (z);
}

/**
* strtow - entry point
*
* @str: arguments
*
* Return: w
*/
char **strtow(char *str)
{
	int x, j, k, l, z = 0, wc = 0;
	char **w;

	if (str == NULL || *str == '\0')
		return (NULL);
	z = wrdcnt(str);
	if (z == 1)
		return (NULL);
	w = (char **)malloc(z * sizeof(char *));
	if (w == NULL)
		return (NULL);
	w[z - 1] = NULL;
	x = 0;
	while (str[x])
	{
		if (str[x] != ' ' && (x == 0 || str[x - 1] == ' '))
		{
			for (j = 1; str[x + j] != ' ' && str[x + j]; j++)
				;
			j++;
			w[wc] = (char *)malloc(j * sizeof(char));
			j--;
			if (w[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
				free(w[k]);
				free(w[z - 1]);
				free(w);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				w[wc][l] = str[x + l];
			w[wc][l] = '\0';
			wc++;
			x += j;
		}
		else
			x++;
	}
	return (w);
}
