/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmotaung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:37:20 by mmotaung          #+#    #+#             */
/*   Updated: 2019/06/12 07:49:19 by mmotaung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	unsigned char	*i;
	unsigned char	*j;

	if (s1 == s2)
		return ((char *)s2);
	if (n == 0 && s1 == s2)
		return (s1);
	i = (unsigned char *)s1;
	j = (unsigned char *)s2;
	while (n--)
		*i++ = *j++;
	return (s1);
}
