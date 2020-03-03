/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshchego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:07:16 by mshchego          #+#    #+#             */
/*   Updated: 2020/02/25 14:09:04 by mshchego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	size_t	i;
	size_t	find_index;
	size_t	remember;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		find_index = 0;
		if (str[i] == to_find[find_index])
		{
			remember = i;
			while (str[i] == to_find[find_index])
			{
				if (to_find[find_index + 1] == '\0')
					return (&str[remember]);
				find_index++;
				i++;
			}
			i = remember;
		}
		i++;
	}
	return (0);
}
