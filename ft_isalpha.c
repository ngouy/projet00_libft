/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 11:27:02 by ngouy             #+#    #+#             */
/*   Updated: 2015/11/04 15:29:12 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** return 1 if c is a letter, 0 either
*/

#include "libft.h"

int		ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
