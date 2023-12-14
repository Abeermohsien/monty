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
	int i;

	if (h == NULL || *h == NULL || (*h)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", n);
		free_nodes();
		exit(EXIT_FAILURE);
	}
	node = *h;
	i = node->n;
	node->n = node->next->n;
	node->next->n = i;
}
