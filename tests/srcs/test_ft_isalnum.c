/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorris <tmorris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:54:28 by tmorris           #+#    #+#             */
/*   Updated: 2021/06/21 15:13:31 by tmorris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft.h"

static int	comp(int a, int b)
{
	ft_putnbr(a);
	ft_putstr(" == ");
	ft_putnbr(b);
	ft_putchar('\n');
	return ((a > 0) == (b > 0));
}

int	main(void)
{
	int				i;

	i = 0;
  	while (1)
	{
		if (!comp(ft_isalnum(i), isalnum(i)))
			return (1);
		++i;
		if (i == 256)
			break ;
	}
	return (0);
}
