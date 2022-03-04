/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 21:15:11 by hsybassi          #+#    #+#             */
/*   Updated: 2022/03/04 21:15:12 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	main(int argc, char **argv)
{
	t_storage	*storage;

	storage = NULL;
	if (argc < 2)
		return (1);
	storage = create_storage(argv, argc);
	review(&storage);
	return (0);
}