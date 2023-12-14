#include "monty.h"
/**
 * add_node - add node to stack
 * @h: head
 * @n: int
 * Return: void
 */
void add_node(stack_t **h, int n)
{
	stack_t *node;

	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
	node->next = NULL;
	node->prev = NULL;
	node->n = n;
	return (node);
}
