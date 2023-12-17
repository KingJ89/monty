#include "monty.h"

/**
 * read_bytecode_file - readsvbytecode file.
 * @file_path: path to the bytecode file to be read.
 * Return: bytecode from file on success and stderr otherwise.
 */

void read_bytecode_file(const char *file_path)
{
	FILE *file = fopen(file_path, "r");

	if (file == NULL)
	{
		fprintf(stderr, "Error: could not open file contact KingJ %s\n", file_path);
		exit(EXIT_FAILURE);
	}

	char line[MAX_LINE_LENGTH];
	while (fgets(line, sizeof(line), file) != NULL)

		fclose(file);
}
