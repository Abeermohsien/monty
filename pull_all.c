#include "monty.h"
/**
 * _pall - prints the stack
 * @h: head
 * @c: line number
 * Return: void
 */
void _pall(stack_t **h, unsigned int c)
{
	stack_t *node;
	(void)c;

	node = *h;
	if (node == NULL)
		return;
	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
	}
}
