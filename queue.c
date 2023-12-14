#include "monty.h"
/**
 * _queue - print top
 * @h: head of the stack
 * @c: line number
 * Return: void
 */
void _queue(stack_t **h, unsigned int c)
{
	(void)h;
	(void)c;
	st.lifi = 1;
}

/**
 * add_queue - add node to the queue tail
 * @h: header pointer
 * @n: new value
 * Return: void
 */
void add_queue(stack_t **h, int n)
{
	stack_t *new_node, *ax;

	ax = *h;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (ax)
	{
		while (ax->next)
			ax = ax->next;
	}
	if (!ax)
	{
		*h = new_node;
		new_node->prev = NULL;
	}
	else
	{
		ax->next = new_node;
		new_node->prev = ax;
	}
}
