/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshchego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 20:21:45 by mshchego          #+#    #+#             */
/*   Updated: 2020/02/26 20:21:48 by mshchego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	if (!(str = (char*)malloc(size + 1)))
		return (NULL);
	i = 0;
	while (i <= size)
		str[i++] = '\0';
	return ((char *)str);
}
