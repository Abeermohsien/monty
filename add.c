#include "monty.h"
/**
 * _add - add to the top of the stack
 * @h: head of the stack
 * @c: line number
 * Return: void
 */

void _add(stack_t **h, unsigned int c)
{
	stack_t *hh;
	int ax;

	if (h == NULL || *h == NULL || (*h)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", c);	
		free_stack();
		exit(EXIT_FAILURE);
	}	
	hh = *h;
	ax = hh->n + hh->next->n;
	hh->next->n = ax;
	*h = hh->next;
	free(hh);
	(*h)->prev = NULL;
}
