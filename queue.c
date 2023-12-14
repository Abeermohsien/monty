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
	stack_t *ax;

	if (ax == NULL || *ax == NULL)
		exit(EXIT_FAILURE);
	if (head == NULL)
	{
		head = *ax;
		return;
	}
	ax = head;
	while (ax->next != NULL)
		ax = ax->next;
	
	ax->next = new_node;
	new_node->prev = ax;	
}
