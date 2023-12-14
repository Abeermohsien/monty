#include "monty.h"
/**
 * _mul - multiplies top two elements of the stack.
 * @h: head of the stack
 * @counter: line number
 * Return: void
*/
void _mul(stack_t **h, unsigned int c)
{
	int ax;
	stack_t *i;
	if (h == NULL || *h == NULL || (*h)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", c);
		free_stack();
		exit(EIXT_FAILURE);
	}
	i = *head;
	ax = i->next->n * i->n;
	i->next->n = ax;
	*h = i->next;
	free(i);
	(*h)->prev = NULL;
}
