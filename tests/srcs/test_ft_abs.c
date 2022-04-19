/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_abs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorris <tmorris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:54:28 by tmorris           #+#    #+#             */
/*   Updated: 2021/06/21 15:13:31 by tmorris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	comp(unsigned int a, unsigned int b)
{
	ft_putnbr(a);
	ft_putstr(" == ");
	ft_putnbr(b);
	ft_putchar('\n');
	return (a == b);
}

int	main(void)
{
	int				values[] = {-2147483648, -5, 5, 2147483647, 0};
	unsigned int	expected[] = {2147483648, 5, 5, 2147483647, 0};
	int				i;

	i = 0;
	while (1)
	{
		if (!comp(ft_abs(values[i]), expected[i]))
			return (1);
		++i;
		if (values[i] == 0)
			break ;
	}
	return (0);
}
