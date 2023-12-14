#include "monty.h"
/**
 * _exe - execution
 * @h: head
 * @c: line number
 * @f: monty fule pointer
 * @content: line content
 * Return: int
 */
int _exe(char *content, stack_t **h, unsigned int c, FILE *f)
{
	instruction_t opst[] = {
		{"push", _push}, {"pall", _pall},
		{"pint", _pint},
		{"pop", _pop}, {"swap", _swap},
		{"add", _add}, {"nop", _nop},
		{"sub", _sub}, {"rotl", _rot1},
		{"rotr", _rot2}, {"queue", _queue},
		{"stack", print_top},
		{NULL, NULL}
	};
	unsigned int j = 0;
	char *oper;

	if (content == NULL)
		fprintf(stderr, "Error: malloc failed\n");
	oper = strtok(content, " \n\t");
	if (oper && oper[0] == '#')
		return (0);
	st.arg = strtok(NULL, " \n\t");
	while (opst[j].opcode && oper)
	{
		if (strcmp(oper, opst[j].opcode) == 0)
		{
			opst[j].f(h, c);
			return (0);
		}
		j++;
	}
	if (oper && opst[j].opcode == NULL)
	{
		fprintf(stderr, "L%d: unkown instruction %s\n", c, oper);
		fclose(f);
		free(content);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	return (1);
}
