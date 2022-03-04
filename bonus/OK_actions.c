/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OK_actions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 21:15:06 by hsybassi          #+#    #+#             */
/*   Updated: 2022/03/04 22:06:48 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"
# include "../Libft/libft.h"

void	OK_actions(t_storage **storage)
{
	ft_putstr_fd("OK\n", 1);
	free_storage(storage);
}

void	KO_actions(t_storage **storage)
{
	ft_putstr_fd("KO\n", 1);
	free_storage(storage);
}