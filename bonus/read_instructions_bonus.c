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
	char	*command;
	int		fd;
	int		number;

	fd = 0;
	command = get_next_line(fd);
	while (command)
	{
		number = get_number_of_operation(command);
		if (!number)
		{
			printf("ahahaha");
			error_actions(storage);
		}
		else
			do_operation_with_stack(number, storage);
		command = get_next_line(fd);
	}
	print_result(storage);
}