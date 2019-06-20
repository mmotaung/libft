/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmotaung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:00:30 by mmotaung          #+#    #+#             */
/*   Updated: 2019/06/10 08:59:08 by mmotaung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned int	i;

	if (dst == src)
		return ((char *)src);
	i = 0;
	if (((unsigned char *)src) < ((unsigned char *)dst))
		while (n-- > 0)
			((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
	else
		while (i < n)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	return (((unsigned char *)dst));
}
