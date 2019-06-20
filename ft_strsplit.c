/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmotaung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 11:20:04 by mmotaung          #+#    #+#             */
/*   Updated: 2019/06/18 11:24:39 by mmotaung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(const char *str, char c)
{
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		{
			while (str[i] && str[i] != c)
				i++;
			size++;
		}
	}
	return (size);
}

char			**ft_strsplit(const char *str, char c)
{
	char	**tab;
	int		i;
	int		col;
	int		start;

	i = 0;
	col = 0;
	if (!str || !(tab = (char **)malloc(sizeof(char *) *
					ft_wordcount(str, c) + 1)))
		return (NULL);
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			start = i;
			while (str[i] && str[i] != c)
				i++;
			tab[col++] = ft_strsub(str, start, i - start);
		}
	}
	tab[col] = NULL;
	return (tab);
}
