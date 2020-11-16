/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorris <tmorris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 14:04:38 by tmorris           #+#    #+#             */
/*   Updated: 2020/11/16 16:55:06 by tmorris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	unsigned char		stop;

	d = (unsigned char*)dest;
	s = (const unsigned char*)src;
	stop = (unsigned char)c;
	if (!d && !s)
		return (dest);
	while (n-- > 0)
	{
		*d++ = *s++;
		if (*(d - 1) == stop)
			return (d);
	}
	return (NULL);
}
