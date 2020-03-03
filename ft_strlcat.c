/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshchego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 16:53:07 by mshchego          #+#    #+#             */
/*   Updated: 2020/02/24 16:53:09 by mshchego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	j = 0;
	while (src[j] != '\0' && ((i + j + 1) < size))
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i != size)
		dest[i + j] = '\0';
	k = 0;
	while (src[k] != '\0')
		k++;
	return (k + i);
}
