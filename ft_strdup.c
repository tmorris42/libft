/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorris <tmorris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 17:16:36 by tmorris           #+#    #+#             */
/*   Updated: 2020/11/19 16:50:01 by tmorris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new;

	if (!(new = (char *)malloc(sizeof(*new) * (ft_strlen(s1) + 1))))
		return (NULL);
	new = ft_memcpy(new, s1, ft_strlen(s1) + 1);
	return (new);
}
