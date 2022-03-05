/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_storage.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 22:00:06 by hsybassi          #+#    #+#             */
/*   Updated: 2022/03/02 22:00:06 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

void	free_storage(t_storage **storage)
{
	if (storage && *storage)
	{
		if ((*storage)->a)
			free_stack(&((*storage)->a));
		if ((*storage)->b)
			free_stack(&((*storage)->b));
		if ((*storage)->line)
			free((*storage)->line);
		free(*storage);
	}
}

void	free_stack(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack && !*stack)
		return ;
	while (*stack)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		free(tmp);
	}
}
