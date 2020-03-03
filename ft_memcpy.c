/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshchego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 15:07:32 by mshchego          #+#    #+#             */
/*   Updated: 2020/02/25 15:07:35 by mshchego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *str, const void *scopy, size_t num)
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
		i++;
	}
	return (str);
}
