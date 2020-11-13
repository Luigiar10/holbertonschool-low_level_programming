#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
int _strlen(char *);
/**
 * append_text_to_file - entry point
 *
 * @filename: filename
 * @text_content: text
 *
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int lui, z;

	if (filename == NULL)
	{
		return (-1);
	}
	lui = open(filename, O_WRONLY | O_APPEND);
	if (lui == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	z = write(lui, text_content, _strlen(text_content));
	if (z == -1)
	{
		return (-1);
	}
	close(lui);
	return (1);
}

/**
 * _strlen - entry point
 *
 * @s: string
 *
 * Return: a
 */
int _strlen(char *s)
{
	int x;

	for (x = 0; s[x]; x++)
	{
	}
	return (x);
}
