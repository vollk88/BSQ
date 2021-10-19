/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 22:18:56 by tcristin          #+#    #+#             */
/*   Updated: 2021/09/07 13:51:17 by tcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	symbols(struct s_val *s);
void	print_struct(struct s_val *s);
void	make_array(struct s_val *value);
void	cleaner(struct s_val *s);
void	str_map(struct s_val *value);
void	solve(struct s_val *s);
void	check_symbols(struct s_val *s);
void	minus_one(struct s_val *s);
void	print_square(struct s_val *s);
void	std_input(struct s_val *s);
void	error(int ID);

void	ok(struct s_val *value)
{
	str_map(value);
	check_symbols(value);
	make_array(value);
	solve(value);
	minus_one(value);
	print_square(value);
	cleaner(value);
}

int	main(int argc, char **argv)
{
	struct s_val	value;
	int				i;

	if (argc == 1)
	{
		std_input(&value);
		ok(&value);
	}
	else
	{
		i = 0;
		while (++i < argc)
		{
			value.filename = argv[i];
			ok(&value);
		}
	}
	return (0);
}
