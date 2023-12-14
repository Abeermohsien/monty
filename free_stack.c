#include "monty.h"

/**
 * free_stack - double linked list free
 * Retuen: void
 */

void free_stack(void)
{
	stack_t *t;

	if (head == NULL)
		return;

	while (head)
	{
		t = head;
		head = head->next;
		free(t);
	}
}
