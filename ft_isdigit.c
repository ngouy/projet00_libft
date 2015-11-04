/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 11:48:46 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 16:05:59 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** return 1 if c is a digit, 0 either
*/

#include "libft.h"

int		ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
