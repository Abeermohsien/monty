#include "monty.h"
/**
 * _pop - print top of the stack
 * @h: head of the stack
 * @c: line number
 * Return: void
 */

void _pop(stack_t **h, unsigned int c)
{
	stack_t *hh;

	if (*h == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", c);
		fclose(st.file);
		free(st.content);
		f_stack(*h);
		exit(EXIT_FAILURE);
	}
	hh = *h;
	*h = hh->next;
	free(hh);
}
