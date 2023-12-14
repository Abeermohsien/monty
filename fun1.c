#include "monty.h"

/**
 * o_file - to openthe file
 * @fn: file name
 * Return: int
 */
void o_file(char *fn)
{
	FILE *df = fopen(fn, "r");

	if (fn == NULL || df == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", fn);
		free_stack();
		exit(EXIT_FAILURE);
	}
	read_f(df);
	fclose(df);
}


/**
 * read_f - read files
 * @df: file pointer
 * Return: void
 */
void read_f(FILE *df)
{
	int n, m = 0;
	char *f = NULL;
	size_t length = 0;

	for (n = 1; getline(&f, &length, df) != -1; n++)
	{
		m = p_line(f, n, m);
	}
	free(f);
}

/**
 * p_line - split lines
 * @buf: buffer
 * @n: line counter
 * @m: format
 * Return: int
 */
int p_line(char *buf, int n, int m)
{
	char *op, *val;
	const char *del = "\n ";

	if (buf == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_stack();
		exit(EXIT_FAILURE
				};
				}
				op = strtok(buf, del);
				if (op == NULL)
				return (m);
				val = strtok(NULL, del);

				if (strcmp(op, "stack") == 0)
				return (0);
				if (strcmp(op, "queue") == 0)
				return (1);

				_exe(op, val, n, m);
				return (m);
				}
