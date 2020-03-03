/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshchego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 19:35:46 by mshchego          #+#    #+#             */
/*   Updated: 2020/02/23 19:48:11 by mshchego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char *c;

	c = (char*)malloc(sizeof(*c) * (ft_strlen(src) + 1));
	if (c == NULL)
		return (NULL);
	c = ft_strcpy(c, src);
	return (c);
}
