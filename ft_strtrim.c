/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshchego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 21:19:33 by mshchego          #+#    #+#             */
/*   Updated: 2020/02/27 21:19:57 by mshchego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	int		begin;
	int		end;
	char	*str;

	if (s == NULL)
		return (NULL);
	begin = 0;
	while (*(s + begin) == ' ' || *(s + begin) == '\n' || *(s + begin) == '\t')
		begin++;
	end = ft_strlen(s) - 1;
	while ((*(s + end) == ' ' || *(s + end) == '\n' || *(s + end) == '\t')
			&& end >= 0)
		end--;
	end++;
	if (end == 0)
		return (ft_strdup(""));
	if (!(str = (char *)malloc(end - begin + 1)))
		return (NULL);
	ft_memcpy(str, s + begin, end - begin);
	*(str + end - begin) = '\0';
	return (str);
}
