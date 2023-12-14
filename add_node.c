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

	if (h == NULL || *h == NULL || (*h) == NULL)
		exit(EXIT_FAILURE);
	tmp = *h;
	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	if (tmp)
		tmp->prev = node;
	node->n = n;
	node->next = *h;
	node->prev = NULL;
	*h = node;
}
