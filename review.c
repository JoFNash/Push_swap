#include "push_swap.h"
#include "Libft/libft.h"
#include <stdio.h>

/* review calls fill_stack_a() and check_sort_a() to check if stack a is sorted */
void	review(p_storage **storage)
{
	if (!storage)
		return ;
	fill_stack_a(storage);
	if (check_sort_a(storage) == 1)
	{
		result_actions(storage);
	}
	else
	{
		start_sort(storage);
	}
}

/* error_actions outputs 'Error' and starts the cleaning of resources */
void	error_actions(p_storage **storage)
{
	write(2, "Error\n", 6);
	free_storage(storage);
	exit(-1);
}

int	check_sort_a(p_storage **storage)
{
	p_stack		*first;
	p_stack		*second;

	first = (*storage)->a;
	second = (*storage)->a;
	if (!first)
		error_actions(storage);
	while (second->next != NULL)
	{
		second = second->next;
		if (first->value >= second->value)
			break;
		first = first->next;
	}
	if (second->next == NULL && first->value <= second->value)
		return (1);
	return (0);
}
