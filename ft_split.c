/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorris <tmorris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 13:48:10 by tmorris           #+#    #+#             */
/*   Updated: 2020/11/18 17:15:06 by tmorris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_strs(char const *s, char c)
{
	int		count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static int	ft_segment_len(char const *s, char c)
{
	int		len;

	len = 0;
	while (*s && *s != c)
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
	free(strings);
}

char		**ft_split(char const *s, char c)
{
	char	**array;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	if (!(array = (char **)ft_calloc(ft_count_strs(s, c) + 1, sizeof(char*))))
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s == '\0')
			break ;
		if (!(array[i] = ft_substr(s, 0, ft_segment_len(s, c))))
		{
			ft_free_strings(array);
			return (NULL);
		}
		i++;
		s += ft_segment_len(s, c);
	}
	return (array);
}
