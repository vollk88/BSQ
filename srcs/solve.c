/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:48:07 by tcristin          #+#    #+#             */
/*   Updated: 2021/09/08 09:48:10 by tcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

short int	min_search(short int v1, short int v2, short int v3)
{
	int	min;

	min = v1;
	if (min > v2)
		min = v2;
	if (min > v3)
		min = v3;
	return (min);
}

void	make_sub(struct s_val *s)
{
	int	i;
	int	j;

	s->sub = malloc(sizeof(short int *) * (s->str_val + 1));
	s->sub[0] = malloc(sizeof(short int) * (s->str_len + 1));
	j = 0;
	while (j < s->str_len + 1)
		s->sub[0][j++] = 0;
	i = 0;
	while (++i < s->str_val + 1)
	{
		s->sub[i] = malloc(sizeof(short int) * (s->str_len + 1));
		s->sub[i][0] = 0;
		j = 0;
		while (++j < s->str_len + 1)
		{
			if (s->array[i - 1][j - 1] == 1)
			{
				s->sub[i][j] = min_search(s->sub[i][j - 1], \
				s->sub[i - 1][j], s->sub[i - 1][j - 1]) + 1;
			}
			else
				s->sub[i][j] = 0;
		}
	}
}

void	max_i_j(struct s_val *s)
{
	int	i;
	int	j;

	s->max = 0;
	i = -1;
	while (++i < s->str_val + 1)
	{
		j = -1;
		while (++j < s->str_len + 1)
		{
			if (s->max < s->sub[i][j])
			{
				s->max = s->sub[i][j];
				s->max_i = i;
				s->max_j = j;
			}
		}
	}
}

void	solve(struct s_val *s)
{
	make_sub(s);
	max_i_j(s);
}
