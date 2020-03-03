/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshchego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 20:24:36 by mshchego          #+#    #+#             */
/*   Updated: 2020/02/25 20:24:39 by mshchego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *str, int c, size_t num)
{
	size_t	i;
	char	*s;

	s = (char *)str;
	i = 0;
	while (++i <= num)
		if ((unsigned char)s[i - 1] == (unsigned char)c)
			return ((char *)str + i - 1);
	return (NULL);
}
