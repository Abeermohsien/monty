#include "monty.h"
/**
 * _rot2 - rotates stsck to button
 * @h: header pointer
 * @c: line number
 * Return: void
 */
void _rot2(stack_t **h, __attribute__((unused))unsigned int c)
{
	stack_t *cpy;

	cpy = *h;
	if (*h == NULL || (*h)->next == NULL)
		return;
	while (cpy->next != NULL)
		cpy = cpy->next;
	cpy->next = *h;
	cpy->prev = NULL;
	cpy->prev->next = NULL;
	(*h)->prev = cpy;
	(*h) = cpy;
}
