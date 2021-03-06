/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshchego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:30:47 by mshchego          #+#    #+#             */
/*   Updated: 2020/02/25 14:30:53 by mshchego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *str, int c, size_t num)
{
	size_t	i;
	char	*s;

	s = (char *)str;
	i = 0;
	while (i < num)
		s[i++] = c;
	return (str);
}
