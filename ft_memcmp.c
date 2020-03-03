/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshchego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 20:48:10 by mshchego          #+#    #+#             */
/*   Updated: 2020/02/25 20:48:12 by mshchego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *str, const void *scom, size_t num)
{
	size_t	i;
	char	*s;
	char	*sc;

	s = (char *)str;
	sc = (char *)scom;
	i = 0;
	while (i < num)
	{
		if (s[i] != sc[i])
			return ((unsigned char)s[i] - (unsigned char)sc[i]);
		i++;
	}
	return (0);
}
