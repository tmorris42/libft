/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorris <tmorris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 18:52:15 by tmorris           #+#    #+#             */
/*   Updated: 2020/11/17 18:57:53 by tmorris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*space;
	size_t	i;

	if (!(space = (char *)malloc(count * size)))
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		space[i] = 0;
		i++;
	}
	return ((void *)space);
}
