/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmotaung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:00:30 by mmotaung          #+#    #+#             */
/*   Updated: 2019/06/22 12:35:09 by mmotaung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;

	if (dst == src)
		return ((char *)src);
	i = 0;
	if (((unsigned char *)src) < ((unsigned char *)dst))
		while (len-- > 0)
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
	else
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	return (((unsigned char *)dst));
}
