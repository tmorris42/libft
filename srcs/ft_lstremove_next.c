/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremove_next.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorris <tmorris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 19:19:48 by tmorris           #+#    #+#             */
/*   Updated: 2021/09/12 19:21:57 by tmorris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstremove_next(t_list *list, void (*del)(void*))
{
	t_list	*next;

	if (!list || !list->next)
		return ;
	next = list->next;
	list->next = next->next;
	ft_lstdelone(next, del);
}
