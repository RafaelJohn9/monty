#include "monty.h"

/**
 * fileAccess-checks for file existence
 * @file:file argument
 * Return: exits if not successful else 0
 */
int fileAccess(char *file)
{
	if (access(file, R_OK) == 0)
	{
		return (0);
	}
	else
	{
		fprintf(stderr, "Error: Can't open file %s\n", file);
		exit(EXIT_FAILURE);
	}
}
