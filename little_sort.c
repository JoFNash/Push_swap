/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 22:00:10 by hsybassi          #+#    #+#             */
/*   Updated: 2022/03/02 22:00:11 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "Libft/libft.h"

void	start_little_sort(p_storage **storage, int elems)
{
	if (elems == 2)
		sort_2_elems(storage);
	else if (elems == 3)
		sort_3_elems(storage);
	else if (elems == 4)
		sort_4_elems(storage);
	else if (elems == 5)
		sort_5_elems(storage);
}
