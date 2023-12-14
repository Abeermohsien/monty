#include "monty.h"

/**
 * _exe - execution
 * @op: head
 * @val: line number
 * @len: monty fule pointer
 * @m: line content
 * Return: int
 */
void _exe(char *op, char *val, int len, int m)
{
	int i;
	int f;

	instruction_t opst[] = {
		{"push", _push},
		{"pall", _pall},
		{"print", _print},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{"sub", _sub},
		{"rotl", rot1},
		{"rot2", rot2},
		{"queue", add_queue},
		{"rotr", rot2},
		{"queue", add_queue},
		{"div", _div},
		{"mul", _mul},
		{"mod", _mod},
		{"pchar", _pchar},
		{"pstr", p_str},
		{NULL, NULL}
	};

	if (op[0] == '#')
		return;

	for (f = 1, i = 0; opst[i].opcode != NULL; i++)
	{
		if (strcmp(op, opst[i].opcode) == 0)
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
 * @len: line number
 * @fr: format
 * Return: void
 */

void f_call(op_func fun, char *oper, char *val, int len, int fr)
{
	stack_t *n;
	int f;
	int i;

	f = 1;
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
			if (isdigit(val[i] == 0))
				{
			if (isdigit(val[i]) == 0)
					{
				fprintf(stderr, "L%d: usage: push integer\n", len);
				free_stack();
				exit(EXIT_FAILURE);
				}
		}
				n = add_node(atoi(val) * f);
				if (fr == 0)
				fun(&n, len);
					if (fr == 1)
					add_queue(&n, len);
	}
		else
			fun(&head, len);
}
