#include "monty.h"
stack_t *head = NULL;

/**
 * main - interpreter
 * @argc: arguments number
 * @argv: location of monty file
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE : monty file\n");
		exit(EXIT_FAILURE);
	}
	open_file(argv[1]);
	free_stack();
	return (0);
}
