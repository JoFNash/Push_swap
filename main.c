#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	p_storage	*storage;

	storage = NULL;
	if (argc < 2)
		return (1);
	storage = create_storage(argv, argc);
	review(&storage);
	show_stack(storage);
	return (0);
}
