#include "monty.h"

#define MAXARGS 2
/**
 * lineBreaker:breaks line to a list of arguments
 * **line:line to be broken
 */
void lineBreaker(char *line, int line_number)
{
	char *lineToBreak;
	char **arrayOfArguments;
	int i = 0, letter = 0, word = 0;
	int index;

	if (line == NULL || *line == '\n')
	{
		return;
	}
	arrayOfArguments = malloc(sizeof(char *) * MAXARGS);
	if (arrayOfArguments == NULL)
	{
		perror("error allocating space");
		return;
	}
	for(index = 0; index < MAXARGS; index++)
	{
		arrayOfArguments[index] = malloc(sizeof(char) * 8);
	}
	lineToBreak = strdup(line);
	while (lineToBreak[i] != '\0')
	{
		if (word > 1)
		{
			perror("invalid number of arguments");
			free(lineToBreak);
			free_arg(arrayOfArguments, index);
			exit(EXIT_FAILURE);
		}
		if (lineToBreak[i] == ' '&& lineToBreak[i + 1] != ' ')
		{
			arrayOfArguments[word][letter] = '\0';
			word++;
			letter = 0;
			i++;
			continue;
		}
		if (lineToBreak[i] == '\n')
		{
			i++;
			continue;
		}
		arrayOfArguments[word][letter] = lineToBreak[i];
		i++;
		letter++;
	}
	arrayOfArguments[word][letter] = '\0';
	if (word != 1)
	{
		perror("invalid number of arguments");
		free(lineToBreak);
		free_arg(arrayOfArguments, index);
		exit(EXIT_FAILURE);
	}
	if (montySyntax(arrayOfArguments) == 1)
	{
		fprintf(stderr, "L%d: unknown instruction %s", line_number, arrayOfArguments[0]);
		free(lineToBreak);
		free_arg(arrayOfArguments, index);
		exit(EXIT_FAILURE);
	}
	free(lineToBreak);
	free_arg(arrayOfArguments, index);
}
