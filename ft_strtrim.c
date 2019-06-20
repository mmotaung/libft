/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmotaung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 12:13:51 by mmotaung          #+#    #+#             */
/*   Updated: 2019/06/19 13:31:04 by mmotaung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*str;

	if (s == NULL)
		return (NULL);
	j = ft_strlen(s);
	while (s[j - 1] == 32 || s[j - 1] == 9 || s[j - 1] == 10)
		j--;
	i = -1;
	while (s[++i] == 32 || s[i] == 9 || s[i] == 10)
		j--;
	if (j <= 0)
		j = 0;
	str = (char *)malloc(sizeof(char) * (j + 1));
	if (str == NULL)
		return (NULL);
	s += i;
	i = -1;
	while (++i < j)
		str[i] = *s++;
	str[i] = '\0';
	return (str);
}
