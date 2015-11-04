/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_intlist.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/12 11:27:06 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 16:41:03 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Put a list of int as content.
*/

#include "libft.h"

void	ft_put_intlist(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp)
	{
		ft_putnbr(*((int *)tmp->content));
		ft_putstr("->");
		tmp = tmp->next;
	}
	ft_putstr("null \n");
}
