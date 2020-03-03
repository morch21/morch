/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshchego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 20:04:47 by mshchego          #+#    #+#             */
/*   Updated: 2020/02/26 20:04:49 by mshchego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t num)
{
	void	*m;

	m = malloc(num);
	if (m == NULL)
		return (NULL);
	ft_bzero(m, num);
	return (m);
}
