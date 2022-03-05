/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_instructions_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 18:26:04 by hsybassi          #+#    #+#             */
/*   Updated: 2022/03/05 19:13:18 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_bonus.h"

void	read_instructions(t_storage **storage)
{
	char	*commands;
	int fd;

	fd = 0;
	while (commands = get_next_line(fd))
	{
		/* pass */
	}
	printf("%s", commands);
	(void)storage;
}