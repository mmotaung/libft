/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmotaung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 10:25:34 by mmotaung          #+#    #+#             */
/*   Updated: 2019/06/22 12:46:29 by mmotaung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	int		c;

	i = 0;
	c = 0;
	if (needle[0] == '\0')
		return (char*)(haystack);
	while (haystack[i] != '\0')
	{
		j = i;
		c = 0;
		while (haystack[j] == needle[c])
		{
			j++;
			c++;
			if (needle[c] == '\0')
				return (char*)(&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
