/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorris <tmorris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 13:48:10 by tmorris           #+#    #+#             */
/*   Updated: 2020/11/18 14:30:55 by tmorris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_strings(char const *s, char c)
{
	int		count;
	
	count = 0;
	while (*s)
	{
		while (ft_memcmp(s, &c, 1))
		   s++;
		if (*s != '\0')
		{	
			count++;
			while (*s && !ft_memcmp(s, &c, 1))
				s++;
		}
	}
	return (count);
}

static int	ft_segment_len(char const *s, char c)
{
	int		len;

	len = 0;
	while (*s && !ft_memcmp(s, &c, 1))
	{
		s++;
		len++;
	}
	return (len);
}

static void	ft_free_strings(char **strings)
{
	int		i;

	i = 0;
	while (strings[i])
	{
		free(strings[i]);
		i++;
	}
}

char		**ft_split(char const *s, char c)
{
	int		array_len;
	char	**array;
	int		i;

	i = 0;
	array_len = ft_count_strings(s, c);
	if (!(array = (char **)ft_calloc(array_len + 1, sizeof(char*))))
		return (NULL);
	while (*s)
	{
		while (s && ft_memcmp(s, &c, 1))
			s++;
		if (*s == '\0')
			break ;
		if (!(array[i] == ft_substr(s, 0, ft_segment_len(s, c))))
		{
			ft_free_strings(array);
			free(array);
			return(NULL);
		}
		i++;
		s += ft_segment_len(s, c);
	}
	return (array);
}
