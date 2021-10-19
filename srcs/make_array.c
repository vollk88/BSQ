/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:13:22 by hloki             #+#    #+#             */
/*   Updated: 2021/09/07 11:13:24 by hloki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	make_array_core(struct s_val *value, int k, int i)
{
	int	j;

	value->array = malloc(sizeof(short int *) * value->str_val);
	while (i < value->str_val)
	{
		j = 0;
		value->array[i] = malloc(sizeof(short int) * value->str_len);
		while (value->map[k] != '\n')
		{
			if (value->map[k] == value->stone)
				value->array[i][j] = 0;
			else if (value->map[k] == value->empty)
				value->array[i][j] = 1;
			else
				value->array[i][j] = 5;
			k++;
			j++;
		}
		i++;
		k++;
	}
}

void	make_array(struct s_val *value)
{
	int			i;
	int			k;

	k = 0;
	i = 0;
	make_array_core(value, k, i);
}
