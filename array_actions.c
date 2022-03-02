/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_actions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 21:59:43 by hsybassi          #+#    #+#             */
/*   Updated: 2022/03/02 21:59:44 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "Libft/libft.h"
#include <stdio.h>

void	fill_array(p_storage **storage)
{
	int		*array;
	p_stack	*stack;
	size_t	i;

	array = (int *)malloc(sizeof(int) * (*storage)->argc);
	if (!array)
		error_actions(storage);
	stack = (*storage)->a;
	i = 0;
	while (stack != NULL)
	{
		array[i] = stack->value;
		stack = stack->next;
		i++;
	}
	sort_array(&array, (*storage)->argc);
	assign_order_to_numbers(storage, array, (int)((*storage)->argc));
	free(array);
}

void	assign_order_to_numbers(p_storage **storage, int *array, int size)
{
	p_stack	**stack;
	p_stack	*tmp;
	int		i;

	stack = &((*storage)->a);
	i = 0;
	while (i < size)
	{
		tmp = (*stack);
		while (tmp != NULL)
		{
			if (array[i] == tmp->value)
			{
				tmp->order = i;
				break ;
			}
			tmp = tmp->next;
		}
		i++;
	}
}

void	sort_array(int **array, size_t size)
{
	size_t	i;
	size_t	j;
	int		tmp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if ((*array)[j] > (*array)[j + 1])
			{
				tmp = (*array)[j];
				(*array)[j] = (*array)[j + 1];
				(*array)[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	print_array(int *array, int n)
{
	int	i;

	i = 0;
	printf("----------\n");
	while (i < n)
	{
		printf("array[%d] = %d\n", i, array[i]);
		i++;
	}
}
