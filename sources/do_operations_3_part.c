/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_operations_3_part.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 22:03:45 by hsybassi          #+#    #+#             */
/*   Updated: 2022/03/08 21:52:57 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "../libft/libft.h"

int	do_reverse_rotate_a(t_storage **storage)
{
	int	value;
	int	order;

	if ((*storage)->a && (*storage)->a->next != NULL)
	{
		remove_end_stack(&((*storage)->a), &value, &order);
		add_stack_top(storage, &((*storage)->a), value, order);
		return (1);
	}
	return (0);
}

int	do_reverse_rotate_b(t_storage **storage)
{
	int	value;
	int	order;

	if ((*storage)->b && (*storage)->b->next != NULL)
	{
		remove_end_stack(&((*storage)->b), &value, &order);
		add_stack_top(storage, &((*storage)->b), value, order);
		return (1);
	}
	return (0);
}

int	do_reverse_rotate_a_and_b(t_storage **storage)
{
	if (do_reverse_rotate_a(storage) && do_reverse_rotate_b(storage))
		return (1);
	return (0);
}
