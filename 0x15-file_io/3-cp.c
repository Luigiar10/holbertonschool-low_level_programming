#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int copy_file(char *file_from, char *file_to);
/**
 * main - entry point
 *
 * @ac: arguments
 * @av: arguments
 *
 * Return: Always 0
 */
int main(int ac, char **av)
{
	int max;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	max = copy_file(av[1], av[2]);

		if (max == 98)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		else if (max == 99)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}

	return (0);
}

/**
 * copy_file - entry point
 *
 * @file_from: arguments
 * @file_to: arguments
 *
 * Return: exit
 */
int copy_file(char *file_from, char *file_to)
{
	int de, ac, x, z, l;
	char *copiar;

	if (!file_from)
	{
		return (98);
	}

	de = open(file_from, O_RDONLY);
		if (de == -1)
		{
			return (98);
		}

	copiar = malloc(sizeof(char) * BUF);
		if (!copiar)
		{
			return (98);
		}

	ac = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

		if (ac == -1)
		{
			free(copiar);
			return (99);
		}

	x = read(de, copiar, BUF);
		if (x == -1)
		{
			free(copiar);
			return (98);
		}

	while (x != 0)
	{
		z = write(ac, copiar, x);
			if (z == -1 || z != x)
			{
				free(copiar);
				return (99);
			}

		x = read(de, copiar, BUF);
				if (x == -1)
				{
					free(copiar);
					return (98);
				}
	}

	free(copiar);

	l = close(de);
	if (l < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", de);
		exit(100);
	}

	if (close(ac) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ac);
		exit(100);
	}

	exit(0);
}
