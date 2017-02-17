/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_begin_with.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <nathangouy@free.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/17 18:40:34 by ngouy             #+#    #+#             */
/*   Updated: 2017/02/17 19:06:51 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool				ft_begin_with(const char *str1, const char *str2)
{
	t_bool			res;

	if (!str1 && !str2)
		return (TRUE);
	if (!str1 || !str2)
		return (FALSE);
	if (ft_strncmp(str1, str2, ft_strlen(str2)) != 0)
		res = (FALSE);
	else
		res = (TRUE);
	return (res);
}
