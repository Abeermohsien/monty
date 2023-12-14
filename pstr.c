#include "monty.h"

/**
 * p_str - prints a string
 * @tack: pointer
 * @n: int
 */
void p_str(stack_t **tack, __attribute__((unused))unsigned int n)
{
	int sc;
	stack_t *t;

	if (tack == NULL || *tack == NULL)
	{
		printf("\n");
		return;
	}

	t = *tack;
	while (t != NULL)
	{
		sc = t->n;
		if (sc <= 0 || sc > 127)
			break;
		printf("%c", sc);
		t = t->next;
	}
	printf("\n");
}
