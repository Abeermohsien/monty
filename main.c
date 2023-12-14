#include "monty.h"
st_t st = {NULL, NULL, NULL, 0};
/**
 * main - interpreter
 * @ac: arguments number
 * @av: location of monty file
 * Return: 0
 */
int main(int ac, char *av[])
{
	char *c;
	FILE *file;
	size_t s = 0;
	ssize_t r = 1;
	stack_t *sk = NULL;
	unsigned int cr = 0;

	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(av[1], "r");
	st.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}
	while (r > 0)
	{
		c = NULL;
		r = getline(&c, &s, file);
		st.content = c;
		cr++;
		if (r > 0)
		{
			_exe(c, &sk, cr, file);
		}
		free(c);
	}
	free_stack(sk);
	fclose(file);
	return (0);
}
