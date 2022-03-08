/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_elems_order_1_and_0.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:39:50 by hsybassi          #+#    #+#             */
/*   Updated: 2022/03/08 18:40:12 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "../libft/libft.h"

void	last_elems_order_1_and_0(t_storage **storage)
{
	reverse_rotate_a(storage);
	push_b(storage);
	reverse_rotate_a(storage);
	push_b(storage);
	sort_3_elems(storage);
	push_a(storage);
	push_a(storage);
}
