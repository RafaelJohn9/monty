#include "monty.h"

/**
 * fileOpener:checks and opens file
 * @filePath: file to be opened or checked existence
 */
void fileOpener(char *file);
{
	int fileChecker = open(filePath, O_RDONLY);
	ssize_t lineChecker;
	char *line;

	if (fileChecker == -1)
	{
		perror("Error: Can't open file %s", file);
		exit(EXIT_FAILURE);
	}
	else
	{
		lineChecker = getline(&line, NULL, stdin);
		while (lineChecker != -1)
		{
			lineBreaker(line);
			lineChecker = getline(&line, NULL, file);
		}
	}
}
