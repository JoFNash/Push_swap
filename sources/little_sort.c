/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 22:00:10 by hsybassi          #+#    #+#             */
/*   Updated: 2022/03/04 19:20:52 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "../libft/libft.h"

void	start_little_sort(t_storage **storage, int elems)
{
	fill_array(storage);
	if (elems == 2)
		sort_2_elems(storage);
	else if (elems == 3)
		sort_3_elems(storage);
	else if (elems == 4)
		sort_4_elems(storage);
	else if (elems == 5)
		sort_5_elems(storage);
}
