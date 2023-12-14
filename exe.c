#include "monty.h"

/**
 * o_file - open
 * @fn: file name
 * Return: void
 */

void o_file(char *fn)
{
	FILE *fd = fopen(fn, "r");

	if (fn == NULL || fd == NULL)
		err(2, fn);

	read_f(fd);
	fclose(fd);
}


/**
 * read_f - read file
 * @df: pointer
 * Return: void
 */

void read_f(FILE *df)
{
	int n, m = 0;
	char *f = NULL;
	size_t length = 0;

	for (n = 1; getline(&f, &length, df) != -1; n++)
		m = p_line(f, n, m);
	free(f);
}


/**
 * p_line - line into tokens
 * @buf: line
 * @n: line number
 * @m: format.
 * Return: Returns 0
 */

int p_line(char *buf, int n, int m)
{
	char *op, *val;
	const char *del = "\n ";

	if (buf == NULL)
		err(4);

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

/**
 * _exe - exeution file
 * @op: op
 * @val: value
 * @m: format
 * @len: line number
 * Return: void
 */
void _exe(char *op, char *val, int len, int m)
{
	int i;
	int f;

	instruction_t func_list[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"nop", _nop},
		{"swap", _swap},
		{"add", _add},
		{"sub", _sub},
		{"div", _div},
		{"mul", _mul},
		{"mod", _mod},
		{"pchar", _pchar},
		{"pstr", p_str},
		{"rotl", rot1},
		{"rotr", rot2},
		{NULL, NULL}
	};

	if (op[0] == '#')
		return;

	for (f = 1, i = 0; func_list[i].opcode != NULL; i++)
	{
		if (strcmp(op, func_list[i].opcode) == 0)
		{
			f_call(func_list[i].f, op, val, len, m);
			f = 0;
		}
	}
	if (f == 1)
		err(3, len, op);
}


/**
 * call_fun - Calls the required function.
 * @fun: function
 * @op: oper
 * @val: numer value.
 * @len: line numeber
 * @m: Format
 */
void f_call(op_func fun, char *op, char *val, int len, int m)
{
	stack_t *node;
	int f;
	int i;

	f = 1;
	if (strcmp(op, "push") == 0)
	{
		if (val != NULL && val[0] == '-')
		{
			val = val + 1;
			f = -1;
		}
		if (val == NULL)
			err(5, len);
		for (i = 0; val[i] != '\0'; i++)
		{
			if (isdigit(val[i]) == 0)
				err(5, len);
		}
		node = add_node(atoi(val) * f);
		if (m == 0)
			fun(&node, len);
		if (m == 1)
			add_queue(&node, len);
	}
	else
		fun(&head, len);
}
