/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   result_actions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 22:00:54 by hsybassi          #+#    #+#             */
/*   Updated: 2022/03/02 22:00:54 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "Libft/libft.h"

void	result_actions(t_storage **storage)
{
	free_storage(storage);
	exit(0);
}
