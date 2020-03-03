/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshchego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 15:53:13 by mshchego          #+#    #+#             */
/*   Updated: 2020/02/25 15:53:16 by mshchego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str, const void *sss, size_t num)
{
	size_t		i;
	char		*s;
	const char	*s2;

	if (str == NULL || sss == NULL)
		return (NULL);
	s = (char *)str;
	s2 = (char *)sss;
	if (s > s2)
	{
		i = num;
		while (i > 0)
		{
			i--;
			s[i] = s2[i];
		}
	}
	else if (s < s2)
		ft_memcpy(s, s2, num);
	return (str);
}
