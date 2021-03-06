/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshchego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 19:02:29 by mshchego          #+#    #+#             */
/*   Updated: 2020/03/02 19:02:31 by mshchego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_i(char *s, int i)
{
	ft_putstr(s);
	ft_putnbr(i);
	ft_putchar('\n');
}
