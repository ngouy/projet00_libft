/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 18:12:33 by ngouy             #+#    #+#             */
/*   Updated: 2015/05/27 11:27:05 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void		ft_letsgo(int n, int *sign, char **ret)
{
	if (n >= 10)
	{
		ft_letsgo(n / 10, sign, ret);
		(*sign)++;
		(*ret)[*sign] = n % 10 + 48;
	}
	else
		(*ret)[*sign] = n + 48;
}

static char		*ft_max(void)
{
	char	*ret;

	ret = ft_strdup(MIN_INT_TO_STR);
	return (ret);
}

char			*ft_itoa(int n)
{
	char	*ret;
	int		sign;

	if (n == MIN_INT)
		return (ft_max());
	sign = 0;
	ret = ft_strnew(11);
	if (n < 0)
	{
		ret[0] = '-';
		n = -n;
		sign = 1;
	}
	ft_letsgo(n, &sign, &ret);
	return (ret);
}
