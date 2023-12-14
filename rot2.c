#include "monty.h"
/**
 * rot2 - rotates stsck to button
 * @h: header pointer
 * @c: line number
 * Return: void
 */
void rot2(stack_t **h, __attribute__((unused))unsigned int c)
{
	stack_t *cpy;

	if (h == NULL || *h == NULL || (*h)->next == NULL)
		return;
	cpy = *h;

	while (cpy->next != NULL)
		cpy = cpy->next;

	cpy->next = *h;
	cpy->prev->next = NULL;
	cpy->prev = NULL;
	(*h)->prev = cpy;
	(*h) = cpy;
}
