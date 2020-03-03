/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshchego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 16:20:00 by mshchego          #+#    #+#             */
/*   Updated: 2020/03/01 16:20:02 by mshchego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*my;

	if (f == NULL || lst == NULL)
		return (NULL);
	my = f(lst);
	if (lst->next && my != NULL)
		my->next = ft_lstmap(lst->next, f);
	return (my);
}
