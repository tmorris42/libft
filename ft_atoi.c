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

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long long int	value;
	int						sign;
	int						i;

	value = 0;
	sign = 1;
	i = 0;
	while (str[i] && ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		value = value * 10;
		value = value + (str[i] - '0');
		i++;
	}
	if ((value > 2147483647 && sign == 1) || (value > 2147483648 && sign == -1))
		return ((sign == -1) - 1);
	return ((int)(value * sign));
}
