/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/12 10:50:04 by ngouy             #+#    #+#             */
/*   Updated: 2015/03/12 11:09:40 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_putbin(unsigned int i)
{
	if (i >= 2)
	{
		ft_putbin(i / 2);
		ft_putchar(i % 2 + 48);
	}
	else
		ft_putchar(i + 48);
}