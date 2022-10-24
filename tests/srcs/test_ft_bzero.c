/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorris <tmorris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 19:06:43 by tmorris           #+#    #+#             */
/*   Updated: 2021/09/13 10:18:21 by tmorris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include "libft.h"

static int	comp(char *a, char *b)
{
	ft_putstr(a);
	ft_putstr(" == ");
	ft_putstr(b);
	ft_putchar('\n');
	return (ft_strcmp(a, b));
}

int one_test(char *str, int len)
{
	char *control_str;
	char *test_str;

	control_str = ft_strdup(str);
	if (!control_str) return (-1);
	test_str = ft_strdup(str);
	if (!test_str)
	{
		free(control_str);
		return (-1);
	}
	ft_bzero(test_str, len);
	bzero(control_str, len);
	int result = comp(test_str, control_str);
	free(control_str);
	free(test_str);
	if (result) return (1);
	return (0);
}

int	main(void)
{
	char	*values[] = {
		"HELLO",
		"",
		NULL
    };
	int		i;

	i = 0;
	while (values[i])
	{
		for (int len = 0; len < 10; ++len)
		{
			if (one_test(values[i], len)) return (1);
		}
		++i;
	}
	return (0);
}
