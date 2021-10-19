/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   symbols.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:00:42 by tcristin          #+#    #+#             */
/*   Updated: 2021/09/07 13:41:23 by tcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	check_symbols(struct s_val *s)
{
	int	len_mem;
	int	i;
	int	rows;

	rows = 1;
	len_mem = s->str_len;
	i = s->str_len + 1;
	while (s->map[i] != '\0')
	{
		if (s->map[i] != s->stone && s->map[i] != s->empty && s->map[i] != '\n')
			error(1);
		if (s->map[i] == '\n')
			rows++;
		i++;
	}
	if (rows != s->str_val)
		error(1);
}

void	symbols(struct s_val *s)
{
	char	*num;
	int		i;
	int		k;

	s->str_val = 0;
	i = 0;
	while (s->params[i])
		i++;
	num = malloc(sizeof(char) * (i - 3));
	i--;
	s->full = s->params[i--];
	s->stone = s->params[i--];
	s->empty = s->params[i--];
	k = 0;
	while (i >= 0)
		num[k++] = s->params[i--];
	num[k] = '\0';
	k = 0;
	while (num[k])
		s->str_val = (s->str_val * 10) + (s->params[k++] - '0');
	free(num);
}
