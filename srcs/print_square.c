/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_square.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:26:13 by tcristin          #+#    #+#             */
/*   Updated: 2021/09/08 17:26:17 by tcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	minus_one(struct s_val *s)
{
	int	i;
	int	j;

	i = s->max_i - s->max - 1;
	while (++i < s->max_i)
	{
		j = s->max_j - s->max - 1;
		while (++j < s->max_j)
			s->array[i][j] = -1;
	}
}

void	print_square(struct s_val *s)
{
	int	i;
	int	j;

	i = -1;
	while (++i < s->str_val)
	{
		j = -1;
		while (++j < s->str_len)
		{
			if (s->array[i][j] == 0)
				write(1, &s->stone, 1);
			else if (s->array[i][j] == 1)
				write(1, &s->empty, 1);
			else
				write(1, &s->full, 1);
		}
		write(1, "\n", 1);
	}
}
