#include "monty.h"

 /**
  * tokenizer-tokenizes a line
  * @line:line to be tokenized
  * Return: array of tokens
  */
char **tokenizer(char *line)
{
	char *token;
	int count = 0, index = 0;
	char **arg;
	char *line_1;

	line_1 = strdup(line);
	if (line == NULL || line[0] == '\n')
	{
		    return NULL;
	}

	token = strtok(line, " \n");
	if (token == NULL)
	{
		return (NULL);
	}
	while (token != NULL)
	{
		count++;
		token = strtok(NULL, " \n");
	}
	arg = malloc(sizeof(char *) * (count + 1));
	token = strtok(line_1, " \n");
	while (token != NULL)
	{
		arg[index++] = token;
		token = strtok(NULL, " \n");
	}
	arg[index] = NULL;
	return (arg);
}
