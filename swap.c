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
	int i, length = 0;

	if (h == NULL || *h == NULL || (*h)->next == NULL)
		fprintf(stderr, "L%d: can't swap, stack too short\n", n);
	node = *h;
	while (node)
	{
		node = node->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", n);
		fclose(st.file);
		free(st.content);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	node = *h;
	i = node->n;
	node->n = node->next->n;
	node->next->n = i;
}
