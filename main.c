#include "monty.h"
stack_t *head = NULL;

/**
 * main - interpreter
 * @argc: arguments number
 * @argv: location of monty file
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc !=2)
	{
		fprintf(stderr, "USAGE : monty file\n");
		exit(EXIT_FAILURE);
	}
	open_file(argv[1]);
	free_nodes();
}

/**
 * create_node - Created
 * @n: Number to go inside the node.
 * Return: Upon sucess pointer to node or NULL.
 */
stack_t *create_node(int n)
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

/**
 * free_nodes - nodes frees.
 */
void free_nodes(void)
{
	stack_t *tmp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

/**
 * add_to_queue - adds node to queue
 * @new_node: node new pointer
 * @ln: line number of opcode
 */
void add_to_queue(stack_t **new_node, __attribute__((unused))Unsigned int ln)
{
	stack_t *tmp;

	if (new_node == NULL || *new_node == NULL)
		exit(EXIT_FAILURE);
	if (head == NULL)
	{
		head = *new_node;
		return;
	}
	tmp = head;
	while (tmp->next != NULL)
		tem = tmp->next;

	tmp->next = *new_node;
	(*new_node)->prev = tmp;
}
