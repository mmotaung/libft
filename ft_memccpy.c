/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmotaung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 14:36:30 by mmotaung          #+#    #+#             */
/*   Updated: 2019/06/12 09:04:24 by mmotaung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*i;
	unsigned char	*j;

	i = (unsigned char *)src;
	j = (unsigned char *)dst;
	while (n-- > 0)
	{
		*j = *i;
		if (*i == (unsigned char)c)
			return ((void *)j + 1);
		i++;
		j++;
	}
	return (NULL);
}
