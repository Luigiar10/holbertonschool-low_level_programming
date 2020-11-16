#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void error_file_from(char *, char *);
void error_file_to(char *, char *);
void error_close(int, char *);

/**
* copy_file - entry point
*
* @file_to: Arguments
* @file_from: Arguments
*
* Return: Always 0
*/
int copy_file(char *file_to, char *file_from)
{
	int hac, desd, x, er, ma;
	char *max;

	max = malloc(sizeof(char) * 1024);
	if (!max)
		return (0);

	desd = open(file_from, O_RDONLY);
	if (desd == -1)
		error_file_from(file_from, max);

	hac = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (hac == -1)
		error_file_to(file_to, max);

	ma = read(desd, max, 1024);

	do {
	if (ma == -1)
		error_file_from(file_from, max);
	if (ma == 0)
		break;
	x = write(hac, max, ma);
	if (x == -1)
		error_file_to(file_to, max);
	ma = read(desd, max, 1024);
	} while (ma > 0);

	er = close(hac);
	if (er == -1)
		error_close(hac, max);
	er = close(desd);
	if (er == -1)
		error_close(desd, max);

	free(max);
	return (0);
}

/**
* error_close - error closing
*
* @fd: arguments
* @max: arguments
*/
void error_close(int fd, char *max)
{
	free(max);
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
* error_file_from - error file
*
* @file_from: arguments
* @max: arguments
*/
void error_file_from(char *file_from, char *max)
{
	free(max);
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
	exit(98);
}

/**
* error_file_to - error created
*
* @file_to: arguments
* @max: arguments
*/
void error_file_to(char *file_to, char *max)
{
	free(max);
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
	exit(99);
}

/**
* main - main of our program
*
* @argc: arguments
* @argv: arguments
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(argv[2], argv[1]);
	return (0);
}
