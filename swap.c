#include "monty.h"
/**
 * _swap - swaps the top two elements
 * @h: head
 * @n: line number
 * Return: void
 */
void _swap(stack_t **h, unsigned int n)
{
	stack_t *node;

	if (h == NULL || *h == NULL || (*h)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", n);
		free_stack();
		exit(EXIT_FAILURE);
	}
	node = (*h)->next;
	(*h)->next = node->next;
	if (node->next)
		node->next->prev = *h;
	node->next = *h;
	(*h)->prev = node;
	node->prev = NULL;
	*h = node;
}
