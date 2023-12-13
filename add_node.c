#include "monty.h"
/**
 * add_node - add node to stack
 * @h: head
 * @n: int
 * Return: void
 */
void add_node(stack_t **h, int n)
{
	stack_t *node, *tmp;

	tmp = *h;
	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (tmp)
		tmp->prev = node;
	node->n = n;
	node->next = *h;
	node->prev = NULL;
	*h = node;
}
