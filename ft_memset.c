/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmotaung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 06:59:08 by mmotaung          #+#    #+#             */
/*   Updated: 2019/06/12 07:21:22 by mmotaung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, char c, size_t n)
{
	unsigned int	i;
	char			*j;

	i = 0;
	j = (char*)s;
	while (i < n)
	{
		j[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
