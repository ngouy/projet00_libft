/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbasew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/12 10:58:07 by ngouy             #+#    #+#             */
/*   Updated: 2015/03/12 11:11:24 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_putbase(unsigned int i, char j)
{
	char		c;

	if (j <= 1 || j >= 37)
	{
		ft_putendl("cette base n'est pas prie en compte");
		return ;
	}
	if (i >= (unsigned int)j)
	{
		ft_putbase(i / j, j);
		c = (i % j) >= 10 ? i % j + 55 : i % j + 48;
		ft_putchar(c);
	}
	else
	{
		c = (i % j) >= 10 ? i % j + 55 : i % j + 48;
		ft_putchar(c);
	}
}
