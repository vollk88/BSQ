/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:23:14 by hloki             #+#    #+#             */
/*   Updated: 2021/09/07 16:23:17 by hloki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	symbols(struct s_val *s);
void	error(int ID);

void	ft_open(struct s_val *s)
{
	s->fd = open(s->filename, O_RDONLY);
	if (s->fd == -1)
		error(3);
}

void	ft_read(struct s_val *s)
{
	s->rs = read(s->fd, &s->a, 1);
	if (s->rs == -1)
		error(2);
}

void	stringlen(struct s_val *s)
{
	int	len_mem;
	int	i;

	s->str_len = 0;
	while (s->map[s->str_len] != '\n' && s->map[s->str_len])
		s->str_len++;
	len_mem = s->str_len;
	i = s->str_len + 1;
	while (s->map[i] != '\0')
	{
		s->str_len = 0;
		while (s->map[i] && s->map[i] != '\n')
		{
			i++;
			s->str_len++;
		}
		if (len_mem != s->str_len)
			error(1);
		i++;
	}	
}

int	f_strln(struct s_val *s)
{
	int		len;
	int		i;

	ft_open(s);
	ft_read(s);
	i = 0;
	len = 0;
	while (s->rs)
	{
		len++;
		ft_read(s);
	}
	close (s->fd);
	return (len);
}

void	str_map(struct s_val *value)
{
	int		i;

	i = 0;
	value->map = (char *)malloc(sizeof(char) * f_strln(value));
	value->params = (char *)malloc(sizeof(char) * 30);
	ft_open(value);
	ft_read(value);
	while (value->rs && value->a != '\n')
	{
		value->params[i++] = value->a;
		ft_read(value);
	}
	value->params[i] = '\0';
	symbols(value);
	i = 0;
	ft_read(value);
	while (value->rs)
	{
		value->map[i++] = value->a;
		ft_read(value);
	}
	close(value->fd);
	stringlen(value);
}
