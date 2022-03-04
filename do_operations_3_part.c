/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_operations_3_part.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 22:03:45 by hsybassi          #+#    #+#             */
/*   Updated: 2022/03/04 15:32:29 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "Libft/libft.h"
#include "stdio.h"

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
