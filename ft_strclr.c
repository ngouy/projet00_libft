/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 13:10:17 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 16:48:36 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Clear a string by filling it with '/0'
*/

#include "libft.h"

void				ft_strclr(char *s)
{
	char			*pt;

	if (!s)
		return ;
	pt = s;
	while (*pt)
	{
		*pt = '\0';
		pt++;
	}
}
