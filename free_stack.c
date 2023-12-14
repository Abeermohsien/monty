#include "monty.h"
/**
 * free_stack - double linked list frees
 * @h: head of the stack
 */

void free_stack(stack_t *h)
{
	stack_t *t;

	if (h == NULL)
		return;

	while (h)
	{
		t = h;
		h = h->next;
		free(t);
	}
}
