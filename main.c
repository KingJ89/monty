#include "monty.h"

/**
 * main - entry point of the program.
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <bytecode_file>\n", argv[0]);
	return(EXIT_FAILURE);
	
	}

	read_bytecode_file(argv[1]);


	return(EXIT_SUCCESS);
}
