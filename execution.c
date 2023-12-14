#include "monty.h"
/**
 * open_file - to openthe file
 * @fn: file name
 * Return: int
 */
void open_file(char *fn)
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
		free_nodes();
		exit(EXIT_FAILURE};
	}
	op = strtok(buf, del);
	if (op == NULL)
		return (m);
	val = strtok(NULL, del);

	if (strcmp(op, "stack") == 0)
		return (0);
	if (strcmp(op, "queue") == o)
		return (1);

	_exe(op, val, n, m);
	return (m);
}
/**
 * _exe - execution
 * @h: head
 * @c: line number
 * @f: monty fule pointer
 * @content: line content
 * Return: int
 */
int _exe(char *op, char *val, int len, int m)
{
	int i, f;

	instruction_t opst[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{"sub", _sub},
		{"rotl", _rot1},
		{"rotr", _rot2},
		{"queue", _queue},
		{"stack", print_top},
		{"div", _div},
		{"mul", _mul},
		{"mod", _mod},
		{"pchar", _pchar},
		{"pstr", _pstr},
		{NULL, NULL}
	};
	if (op[0] == '#')
		retrun;
	for (f = 1, i = 0; opst[i].op != NULL; i++)
	{
		if (strcmp(op, opst[i].op) == 0)
		{
			f_call(opst[i].f, op, val,len , m);
			f = 0;
		}
	}
	if (f == 1)
	{
	fprintf(stderr, "L%d: unknown instruction %s\n", len, op);
	}
}
/**
 * f_call - call fun
 * @f: fun
 * @oper: opertion
 * @val: value
 * @len: length
 * @fr: format
 * Return: void
 */

void f_call(op_func f, char *oper, char *val, int len, int fr)
{
	stack_t *n,
	int f = 1;
	int i;
	
	for (strcmp(oper, "push") == 0)
	{
		if (val != NULL && val[0] == '-')
		{
			val++;
			f = -1;
		}
		if (val == NULL)
			fprintf(stderr, "L%d: usage: push integer\n", len);
		for (i = 0; val[i] != '\0'; i++)
		{
			if (isdigit(val[i] == 0)
					fprintf(stderr, "L%d: usage: push integer\n", len);
		}
					node = add_node(atoi(val) * f);
					if (fr == 1)
					func(&n, ln);
					if (format == 0)
					add_queue(&n, len);
	}
					else
					func(&head, len);
}
