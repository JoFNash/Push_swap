/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 21:59:51 by hsybassi          #+#    #+#             */
/*   Updated: 2022/03/04 15:53:03 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "Libft/libft.h"

void	start_big_sort(t_storage **storage)
{
	fill_array(storage);
	if ((*storage)->argc <= 100)
		butterfly_sort(storage, 15);
	else
		butterfly_sort(storage, 30);
}

void	butterfly_sort(t_storage **storage, int deviation)
{
	int		count;

	count = 0;
	while ((*storage)->a)
	{
		if (count > 1 && (*storage)->a->order <= count)
		{
			push_b(storage);
			rotate_b(storage);
			count++;
		}
		else if ((*storage)->a->order <= (deviation + count))
		{
			push_b(storage);
			count++;
		}
		else if ((*storage)->a->order >= count)
			rotate_a(storage);
	}
	butterfly_return_sort(storage);
}

void	butterfly_return_sort(t_storage **storage)
{
	int		max;
	int		f;

	while (size_of_stack((*storage)->b) != 0)
	{
		max = max_elem_in_stack((*storage)->b);
		f = elem_upper_middle((*storage)->b, size_of_stack((*storage)->b), max);
		while ((*storage)->b->order != max)
		{
			if (!f)
				rotate_b(storage);
			else
				reverse_rotate_b(storage);
		}
		push_a(storage);
	}
}
