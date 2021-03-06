/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 11:27:02 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 16:05:12 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** return 1 if c is an ascii char, 0 either
*/

#include "libft.h"

int					ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
