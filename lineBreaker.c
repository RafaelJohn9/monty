#include "monty.h"

/**
 * lineBreaker:breaks line to a list of arguments
 * **line:line to be broken
 */
void lineBreaker(char *line)
{
	char *lineToBreak;
	char **arrayOfArguments;

	if (line == NULL || line == '\n')
	{
		return;
	}
	lineToBreak = strdup(const char(line));
	free(line);
