/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_operations_1_part.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 22:00:01 by hsybassi          #+#    #+#             */
/*   Updated: 2022/03/02 22:00:01 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "../libft/libft.h"

/* allowed operations for stacks a and b */
int	do_swap_a(t_storage **storage)
{
	int		tmp_value;
	int		tmp_order;
	t_stack	*stack_a;

	stack_a = (*storage)->a;
	if (stack_a && stack_a->next != NULL)
	{
		tmp_value = stack_a->value;
		stack_a->value = stack_a->next->value;
		stack_a->next->value = tmp_value;
		tmp_order = stack_a->order;
		stack_a->order = stack_a->next->order;
		stack_a->next->order = tmp_order;
		return (1);
	}
	return (0);
}

int	do_swap_b(t_storage **storage)
{
	int		tmp_value;
	int		tmp_order;
	t_stack	*stack_b;

	stack_b = (*storage)->b;
	if (stack_b && stack_b->next != NULL)
	{
		tmp_value = stack_b->value;
		stack_b->value = stack_b->next->value;
		stack_b->next->value = tmp_value;
		tmp_order = stack_b->order;
		stack_b->order = stack_b->next->order;
		stack_b->next->order = tmp_order;
		return (1);
	}
	return (0);
}

int	do_swap_a_and_b(t_storage **storage)
{
	if (do_swap_a(storage) && do_swap_b(storage))
		return (1);
	return (0);
}

int	do_push_a(t_storage **storage)
{
	int	value_b;
	int	order_b;

	if ((*storage)->b)
	{
		remove_top_stack(&((*storage)->b), &value_b, &order_b);
		add_stack_top(storage, &((*storage)->a), value_b, order_b);
		return (1);
	}
	return (0);
}

int	do_push_b(t_storage **storage)
{
	int	value_a;
	int	order_a;

	if ((*storage)->a)
	{
		remove_top_stack(&((*storage)->a), &value_a, &order_a);
		add_stack_top(storage, &((*storage)->b), value_a, order_a);
		return (1);
	}
	return (0);
}
