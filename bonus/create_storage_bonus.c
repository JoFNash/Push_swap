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

#include "../includes/push_swap.h"

t_storage	*create_storage(char **argv, int argc)
{
	t_storage	*storage;

	storage = (t_storage *)malloc(sizeof(t_storage));
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
