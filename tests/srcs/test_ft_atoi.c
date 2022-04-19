/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorris <tmorris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 19:06:43 by tmorris           #+#    #+#             */
/*   Updated: 2021/09/13 10:18:21 by tmorris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	comp(int a, int b)
{
	ft_putnbr(a);
	ft_putstr(" == ");
	ft_putnbr(b);
	ft_putchar('\n');
	return (a == b);
}

int	main(void)
{
	char	*values[] = {
		"-2147483648",
		"-5",
		"5",
		"2147483647",
		"abc",
		"-58text9",
		"42",
		"674832",
		"--3161631",
		"+426161",
		"++2626",
		"+et4",
		"+-+-+-+--62727",
		"-2147483649",
		"-2147483650",
		"-2147483660",
		"2147483650",
		"2147483648",
		0};
	int		i;

	i = 0;
	while (1)
	{
		if (!comp(ft_atoi(values[i]), atoi(values[i])))
			return (1);
		++i;
		if (values[i] == 0)
			break ;
	}
	return (0);
}
