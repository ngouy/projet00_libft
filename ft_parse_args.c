/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngouy <nathangouy@free.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/17 14:37:03 by ngouy             #+#    #+#             */
/*   Updated: 2017/02/17 18:53:31 by ngouy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** parse program arguments and return a struc with all in it
*/

#include "libft.h"

void				_parse_arg(t_pg_args *res, char ***to_parse)
{
	static t_bool	is_option = -1;
	char			*current_arg;

	is_option = is_option == -1 ? TRUE : is_option;
	current_arg = **to_parse;


}

void				*ft_parse_args(const int argc, const char **argv)
{
	t_pg_args		*result;
	char			**walker;

	result = (t_pg_args *)malloc(sizeof(t_pg_args));
	*(char **)&result->exec_name = (char*)argv[0];
	*(int *)&result->args_size = (int)argc;
	walker=(char **)argv + 1;
	while(*walker)
	{
		_parse_arg(result, &walker);
	}
	return (result);
}




/* the idea :
**'-' + string : 1 letter in string == 1 short option
**'--' + string : 1 string = 1 long option
**'--' + blank : end of options, beginin of params
*/
