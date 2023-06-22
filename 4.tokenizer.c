#include "monty.h"
#include <string.h>

 /**
  * tokenizer-tokenizes a line
  * @line:line to be tokenized
  * Return: array of tokens
  */
char **tokenizer(char *line)
{
	char *line_copy;
	const char *delimiters = " \n\t";
	char *token;
	int count = 0, i = 0;
	int index = 0;
	char **tokens;

	if (line == NULL || line[0] == '\0')
	{
		return NULL;
	}
	line_copy = malloc(strlen(line) + 1);
	if (line_copy == NULL)
	{
		return NULL;
	}
	strcpy(line_copy, line);
	token = strtok(line_copy, delimiters);
	if (token == NULL)
	{
		free(line_copy);
		return NULL;
	}
	while (token != NULL)
	{
		count++;
		token = strtok(NULL, delimiters);
	}
	tokens = malloc((count + 1) * sizeof(char *));
	if (tokens == NULL)
	{
		free(line_copy);
		return NULL;
	}
	token = strtok(line, delimiters);
	while (token != NULL)
	{
		tokens[index] = malloc(strlen(token) + 1);
		if (tokens[index] == NULL)
		{
			for (i = 0; i < index; i++)
			{
				free(tokens[i]);
			}
			free(tokens);
			free(line_copy);
			return NULL;
		}
		strcpy(tokens[index], token);
		index++;
		token = strtok(NULL, delimiters);
	}
	tokens[index] = NULL;
	free(line_copy);
	return tokens;
}
