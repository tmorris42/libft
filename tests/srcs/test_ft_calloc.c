/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorris <tmorris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 19:06:43 by tmorris           #+#    #+#             */
/*   Updated: 2021/09/13 10:18:21 by tmorris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include "libft.h"

int one_test(size_t count, size_t size)
{
	char *ft;
	char *std;

	ft = ft_calloc(count, size);
	std = calloc(count, size);
	if (!ft && !std)
		return (0);
	if (!ft || !std)
		return (1);
	for (size_t i = 0; i < count * size; ++i) {
		if (ft[i] != std[i]) {
			return(1);
		}
	}
	free(ft);
	free(std);
	return (0);
}

int	main(void)
{
	size_t counts[] = {
		0,
		1,
		2,
		10,
		100,
	};

	size_t sizes[] = {
		0,
		1,
		2,
		10,
		100,
	};

	for (size_t i = 0; i < 6; ++i)
	{
		for (size_t j = 0; j < 6; ++j) {
			if (one_test(counts[i], sizes[j])) {
				ft_putstr("count: ");
				ft_putnbr(counts[i]);
				ft_putchar('\n');
				ft_putstr("size: ");
				ft_putnbr(sizes[j]);
				ft_putchar('\n');
				return (1);
			}
		}
	}
	return (0);
}
