#include "push_swap.h"
#include "Libft/libft.h"
#include <stdio.h>

void	remove_top_stack(p_storage **storage, p_stack **top, 
	int *remove_value, int *order)
{
	p_stack	*tmp;

	tmp = (*top);
	if (tmp != NULL)
	{
		if (tmp->next == NULL)
		{
			*remove_value = tmp->value;
			*order = tmp->order;
			(*top)->prev = NULL;
			free(*top);
			*top = NULL;
		}
		else
		{
			*remove_value = tmp->value;
			*order = tmp->order;
			(*top) = (*top)->next;
			(*top)->prev = NULL;
			free(tmp);
		}
	}
}

void	remove_end_stack(p_storage **storage, p_stack **top, 
	int *remove_value, int *remove_order)
{
	p_stack *tmp;

	tmp = *top;
	if (tmp != NULL)
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		*remove_value = tmp->value;
		*remove_order = tmp->order;
		tmp = tmp->prev;
		free(tmp->next);
		tmp->next = NULL;
	}
}

int	size_of_stack(p_stack *stack)
{
	int size;

	size = 0;
	if (!stack)
		return (0);
	if (stack->next == NULL)
		return (1);
	while (stack != NULL)
	{
		size++;
		stack = stack->next;
	}
	return (size);
}

int	max_elem_in_stack(p_stack *stack)
{
	int	max;

	if (stack)
	{
		max = stack->order;
		while (stack != NULL)
		{
			if (stack->order > max)
				max = stack->order;
			stack = stack->next;
		}
	}
	return (max);
}

 int	elem_upper_middle(p_stack *stack, int size, int value)
{
	int	i;

	i = 0;
	if (stack)
	{

		while (stack && stack->order != value)
		{
			stack = stack->next;
			i++;
		}
	}
	if (i >= size / 2)
	{
		return (1);
	}
	else
		return (0);
}
