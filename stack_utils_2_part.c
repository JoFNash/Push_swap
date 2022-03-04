/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_2_part.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 22:02:23 by hsybassi          #+#    #+#             */
/*   Updated: 2022/03/04 15:45:57 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "Libft/libft.h"
#include <stdio.h>

void	remove_top_stack(t_stack **top, int *remove_value, int *order)
{
	t_stack	*tmp;

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

void	remove_end_stack(t_stack **top,
	int *remove_value, int *remove_order)
{
	t_stack	*tmp;

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

int	size_of_stack(t_stack *stack)
{
	int	size;

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

int	max_elem_in_stack(t_stack *stack)
{
	int	max;

	max = 0;
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

int	elem_upper_middle(t_stack *stack, int size, int value)
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
