#include "main.h"

/**
 * main - the prototype
 * @argc: argument count
 * @argv: array of pointers to argument
 *
 * Return: none
 */

int main(int argc, char *argv[])
{
	FILE *fptr;
	size_t counter;
	ssize_t line;
	char *buffer = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "Filename not found\n");
		exit(EXIT_FAILURE);
	}

	fptr = fopen(argv[1], "r");
	if (fptr == NULL)
	{
		fprintf(stderr, "Cannot open file <%s>", argv[1]);
		exit(EXIT_FAILURE);
	}

	while ((line = getline(&buffer, &counter, fptr)) != -1)
	{
		factor(buffer);
	}

	fclose(fptr);

	return (0);
}
