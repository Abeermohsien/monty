#include "monty.h"
/**
 * _push - push node into the stack
 * @h: head pointer
 * @c: line number
 * Return: void
 */
void _push(stack_t **h, unsigned int c)
{
	int i, j = 0, f = 0;

	if (st.arg)
	{
		if (st.arg[0] == '-')
			j++;
		for (; st.arg[j] != '\0'; j++)
		{
			if (st.arg[j] > 57 || st.arg[j] < 48)
				f = 1;
		}
		if (f == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", c);
			fclose(st.file);
			free(st.content);
			free_stack(*h);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", c);
		fclose(st.file);
		free(st.content);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	i = atoi(st.arg);
	if (st.lifi == 0)
		add_node(h, i);
	else
		add_queue(h, i);
}

