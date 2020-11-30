#include <stdlib.h>
char *_memcpy(char *dest, char *src, unsigned int n);
/**
* _realloc - entry point
*
* @ptr: arguments
* @old_size: arguments
* @new_size: arguments
*
* Return: pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr = malloc(new_size);

	if (ptr == NULL)
		return (NULL);

	if (ptr == NULL)
		return (ptr);

	ptr = _memcpy(ptr, ptr, (new_size > old_size ? old_size : new_size));
	free(ptr);
	return (ptr);
}

/**
* _memcpy - entry point
*
* @dest: arguments
* @src: arguments
* @n: arguments
*
* Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		*(dest + x) = *(src + x);
		x++;
	}

	return (dest);
}
