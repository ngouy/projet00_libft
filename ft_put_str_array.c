/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_str_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <nathangouy@free.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/12 11:25:23 by ngouy             #+#    #+#             */
/*   Updated: 2017/02/17 18:45:04 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Put an str array separated with optional separator string
** if null given, as second parms, '\n' is used
*/

#include "libft.h"

void				ft_put_str_array(const char **to_print, const char *separ)
{
	const char		**tmp;
	const char		*default_separator;

	default_separator = *separ ? separ : "\n";
	tmp = to_print;
	if (!tmp || !*tmp)
		return ;
	while (*tmp)
	{
		ft_putstr(*tmp);
		tmp++;
		if (*tmp)
			ft_putstr(default_separator);
	}
}
