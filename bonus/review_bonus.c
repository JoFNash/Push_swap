/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   review.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 22:00:58 by hsybassi          #+#    #+#             */
/*   Updated: 2022/03/02 22:00:58 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_bonus.h"
#include "../includes/push_swap.h"
#include "../libft/libft.h"
#include <stdio.h>

void	review(t_storage **storage)
{
	if (!storage)
		return ;
	fill_stack_a(storage);
	if (check_sort_a(storage) == 1)
	{
		OK_actions(storage); /*  New!  */
	}
	else
	{
		read_instructions(storage);
	}
}

void	error_actions(t_storage **storage)
{
	write(2, "Error\n", 6);
	free_storage(storage);
	exit(-1);
}

int	check_sort_a(t_storage **storage)
{
	t_stack		*first;
	t_stack		*second;

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
