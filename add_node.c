#include "monty.h"
/**
 * add_node - add node to stack
 * @n: int
 * Return: void
 */
stack_t *add_node(int n)
{
	stack_t *node;

	node = malloc(sizeof(stack_t));
	if (node == NULL)
		err(4);
	node->next = NULL;
	node->prev = NULL;
	node->n = n;
	return (node);
}
