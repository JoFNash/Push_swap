/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 22:00:13 by hsybassi          #+#    #+#             */
/*   Updated: 2022/03/02 22:00:13 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	p_storage	*storage;

	storage = NULL;
	if (argc < 2)
		return (1);
	storage = create_storage(argv, argc);
	review(&storage);
	return (0);
}
