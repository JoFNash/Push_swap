/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_storage.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 21:59:55 by hsybassi          #+#    #+#             */
/*   Updated: 2022/03/02 21:59:55 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

p_storage	*create_storage(char **argv, int argc)
{
	p_storage	*storage;

	storage = (p_storage *)malloc(sizeof(p_storage));
	if (!storage)
		return (NULL);
	storage->a = NULL;
	storage->b = NULL;
	storage->line = NULL;
	storage->argv = argv;
	storage->next = 1;
	storage->argc = argc - 1;
	return (storage);
}
