#include "push_swap.h"

p_storage	*create_storage(char **argv, int argc)
{
	p_storage   *storage;

	storage = (p_storage *)malloc(sizeof(p_storage));
	if (!storage)
		return (NULL);
	storage->a = NULL;
	storage->b = NULL;
	storage->line = NULL;
	storage->argv = argv;
	storage->flag = 0;
	storage->next = 1;
	storage->mid = 0;
	storage->max = 0;
	storage->argc = argc - 1;
	return (storage);
}
