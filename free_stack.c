#include "monty.h"
/**
 * free_stack - double linked list frees
 * @h: head of the stack
 */

void free_stack(stack_t *h)
{
	stack_t *ax;

	ax = h;
	while (h)
	{
		ax = h->next;
		free(h);
		h = ax;
	}
}
