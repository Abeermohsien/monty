#include "monty.h"

/**
 * _exe - execution
 * @op: head
 * @val: line number
 * @len: monty fule pointer
 * @m: line content
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
			f_call(opst[i].f, op, val, len, m);
			f = 0;
		}
	}
	if (f == 1)
	{
	fprintf(stderr, "L%d: unknown instruction %s\n", len, op);
	free_stack();
	exit(EXIT_FAILURE);
	}
}
/**
 * f_call - call fun
 * @fun: fun
 * @oper: opertion
 * @val: value
 * @len: length
 * @fr: format
 * Return: void
 */

void f_call(op_func fun, char *oper, char *val, int len, int fr)
{
	stack_t *n,
	int f = 1;
	int i;

	if (strcmp(oper, "push") == 0)
	{
		if (val != NULL && val[0] == '-')
		{
			val = val + 1;
			f = -1;
		}
		if (val == NULL)
		{
			fprintf(stderr, "L%d: usage: push integer\n", len);
			free_stack();
			exit(EXIT_FAILURE);
		}
		for (i = 0; val[i] != '\0'; i++)
		{
			if (isdigit(val[i] == 0)
					{
				fprintf(stderr, "L%d: usage: push integer\n", len);
				free_stack();
				exit(EXIT_FAILURE);
				}
		}
				node = add_node(atoi(val) * f);
				if (fr == 0)
				fun(&n, len);
					if (format == 0)
					add_queue(&n, len);
	}
					else
					fun(&head, len);
}
