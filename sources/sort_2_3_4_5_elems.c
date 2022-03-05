/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2_3_4_5_elems.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 22:01:01 by hsybassi          #+#    #+#             */
/*   Updated: 2022/03/04 15:35:33 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "Libft/libft.h"

void	sort_2_elems(t_storage **storage)
{
	swap_a(storage);
	result_actions(storage);
}

void	sort_3_elems(t_storage **storage)
{
	t_stack	*stack;
	int		first;
	int		second;
	int		third;

	stack = (*storage)->a;
	first = stack->value;
	stack = stack->next;
	second = stack->value;
	stack = stack->next;
	third = stack->value;
	do_sort_3_elems(storage, first, second, third);
}

void	do_sort_3_elems(t_storage **storage, int first, int second, int third)
{
	if (first < third && third < second)
	{
		reverse_rotate_a(storage);
		swap_a(storage);
	}
	else if (first < second && first > third)
	{
		reverse_rotate_a(storage);
	}
	else if (first > second && first < third)
	{
		swap_a(storage);
	}
	else if (third < first && third > second)
	{
		rotate_a(storage);
	}
	else if (third < second && first > second)
	{
		swap_a(storage);
		reverse_rotate_a(storage);
	}
	//show_stack(*storage);
}

void	sort_4_elems(t_storage **storage)
{
	int		min;
	t_stack	*stack;

	min = min_value_stack((*storage)->a);
	stack = (*storage)->a;
	while (stack != NULL)
	{
		if (stack->value == min)
		{
			push_b(storage);
			break ;
		}
		stack = stack->next;
		rotate_a(storage);
	}
	sort_3_elems(storage);
	push_a(storage);
}

// 9 -7 2 0

void	sort_5_elems(t_storage **storage)
{
	int		min;
	t_stack	*stack;

	min = min_value_stack((*storage)->a);
	stack = (*storage)->a;
	while (stack != NULL)
	{
		if (stack->value == min)
		{
			push_b(storage);
			break ;
		}
		stack = stack->next;
		rotate_a(storage);
	}
	sort_4_elems(storage);
	push_a(storage);
}
