#include "monty.h"
/**
 * _pall - prints the stack
 * @h: head
 * @n: line number
 * Return: void
 */
void _pall(stack_t **h, unsigned int n)
{
	stack_t *node;
	(void)n;

	node = *h;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", node->n);
		node = node->next;
	}
}
