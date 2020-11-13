#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
/**
 * read_textfile - entry point
 *
 * @filename: file.
 * @letters: letters
 *
 * Return: characters readed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int lui;
	char *arr;
	ssize_t l, x;

	if (filename == NULL)
	{
		return (0);
	}

	lui = open(filename, O_RDONLY);
	
	if (lui == -1)
	{
		return (0);
	}
	
	arr = malloc(sizeof(char) * letters);
	
	if (arr == NULL)
	{
		return (0);
	}
	
	l = read(lui, arr, letters);
	
	if (l == -1)
	{
		return (0);
	}
	
	x = write(STDOUT_FILENO, arr, l);
	close(lui);
	lui = strlen(arr);
	return (x);
}
