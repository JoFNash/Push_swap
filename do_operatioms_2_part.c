#include "push_swap.h"
#include "Libft/libft.h"
#include "stdio.h"

void	do_rotate_a(p_storage **storage)
{
	int	value;
	int	order;

	if ((*storage)->a && (*storage)->a->next != NULL)
	{
		remove_top_stack(storage, &((*storage)->a), &value, &order);
		add_stack_end(storage, &((*storage)->a), value, order);
	}
}

void	do_rotate_b(p_storage **storage)
{
	int	value;
	int	order;

	if ((*storage)->b && (*storage)->b->next != NULL)
	{
		remove_top_stack(storage, &((*storage)->b), &value, &order);
		add_stack_end(storage, &((*storage)->b), value, order);
	}
}

void	do_rotate_a_and_b(p_storage **storage)
{
	do_rotate_a(storage);
	do_rotate_b(storage);
}

void	do_reverse_rotate_a(p_storage **storage)
{
	int	value;
	int	order;

	if ((*storage)->a && (*storage)->a->next != NULL)
	{
		remove_end_stack(storage, &((*storage)->a), &value, &order);
		add_stack_top(storage, &((*storage)->a), value, order);
	}
}

void	do_reverse_rotate_b(p_storage **storage)
{
	int	value;
	int	order;

	if ((*storage)->b && (*storage)->b->next != NULL)
	{
		remove_end_stack(storage, &((*storage)->b), &value, &order);
		add_stack_top(storage, &((*storage)->b), value, order);
	}
}

void	do_reverse_rotate_a_and_b(p_storage **storage)
{
	do_reverse_rotate_a(storage);
	do_reverse_rotate_b(storage);
}
