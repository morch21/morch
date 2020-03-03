/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshchego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 12:18:08 by mshchego          #+#    #+#             */
/*   Updated: 2020/02/27 12:36:41 by mshchego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	size_t	i;

	if (s != NULL && f != NULL)
	{
		i = 0;
		while (s[i])
			i++;
		new = (char*)malloc(sizeof(char) * (i + 1));
		if (new == NULL)
			return (NULL);
		i = 0;
		while (s[i])
		{
			new[i] = f(s[i]);
			i++;
		}
		new[i] = '\0';
		return (new);
	}
	else
		return (NULL);
}
