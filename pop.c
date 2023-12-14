#include "monty.h"
/**
 * _pop - print top of the stack
 * @h: stack header
 * @c: line number
 * Return: void
 */

void _pop(stack_t **h, unsigned int c)
{
	stack_t *hh;

	if (h == NULL || *h == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack", c);	
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	hh = *h;
	*h = hh->next;
	if (*h != NULL)
		(*h)->prev = NULL;
	free(hh);
}
