/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshchego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 15:27:54 by mshchego          #+#    #+#             */
/*   Updated: 2020/02/25 15:27:56 by mshchego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *str, const void *scopy, int k, size_t num)
{
	size_t	i;
	char	*s;
	char	*c;

	s = (char *)str;
	c = (char *)scopy;
	i = 0;
	while (i < num)
	{
		s[i] = c[i];
		if ((unsigned char)c[i] == (unsigned char)k)
			return ((char *)str + i + 1);
		i++;
	}
	return (NULL);
}
