/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 14:40:01 by ybayart           #+#    #+#             */
/*   Updated: 2019/08/22 20:15:14 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list,
		void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*list;
	t_list	*tmp;

	list = *begin_list;
	while (list && list->next)
	{
		if ((*cmp)(list->next->data, data_ref) == 0)
		{
			tmp = list->next;
			list->next = list->next->next;
			(*free_fct)(tmp->data);
			free(tmp);
		}
		list = list->next;
	}
	list = *begin_list;
	if (list && (*cmp)(list->data, data_ref) == 0)
	{
		*begin_list = list->next;
		(*free_fct)(list->data);
		free(list);
	}
}
