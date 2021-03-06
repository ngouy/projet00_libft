/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 11:12:43 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 16:06:07 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** return 1 if c is a printable char, 0 either
*/

#include "libft.h"

int					ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
