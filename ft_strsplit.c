/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshchego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 11:05:15 by mshchego          #+#    #+#             */
/*   Updated: 2020/02/28 11:05:20 by mshchego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_wh(char const *s, char c, char wh, size_t max)
{
	size_t	i;
	size_t	j;
	int		b;

	i = 0;
	j = 0;
	b = 1;
	while (*s)
		if (*s == c)
		{
			if (j > max)
				max = j;
			j = 0;
			i = (b != 1) ? (i + 1) : i;
			b = 1;
			s++;
		}
		else
		{
			j++;
			b = 0;
			s++;
		}
	i = (b == 0) ? (i + 1) : i;
	return (wh == 'w' ? max : i);
}

static char	**fill_str(char **str, char const *s, char c, int b)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (*s)
		if (*s == c)
		{
			if (b != 1)
				str[i++][j] = '\0';
			j = 0;
			b = 1;
			s++;
		}
		else
		{
			str[i][j++] = *s;
			b = 0;
			s++;
		}
	if (b == 0)
		str[i][j] = '\0';
	return (str);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	i = get_wh(s, c, 'h', 0);
	j = 0;
	str = (char**)malloc(sizeof(char*) * (i + 1));
	if (!str)
		return (NULL);
	while (j < i)
		if (!(str[j++] = (char*)malloc(sizeof(char) *
		(get_wh(s, c, 'w', 0) + 1))))
			return (NULL);
	str[i] = (char*)malloc(sizeof(char));
	if (!str[i])
		return (NULL);
	str[i] = NULL;
	return (fill_str(str, s, c, 1));
}
