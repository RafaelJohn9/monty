#include "monty.h"

/**
 * fileExistence-checks for file existence
 * @file:file argument
 * Return: exits if not successful else 0
 */
int fileExistence(char *file)
{
	if (access(file, F_OK) == 0)
	{
		return (0);
	}
	else
	{
		fprintf(stderr, "Error: Can't open file %s\n", file);
		exit(EXIT_FAILURE);
	}
}
