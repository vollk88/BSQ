/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   std_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 21:07:12 by tcristin          #+#    #+#             */
/*   Updated: 2021/09/08 21:07:16 by tcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	std_input(struct s_val *s)
{
	int		fd;
	char	a;

	fd = open("map_std_in", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (s->fd == -1)
		error(3);
	s->filename = "map_std_in";
	while (read(0, &a, 1) > 0)
		write(fd, &a, 1);
	if (s->rs == -1)
		error(2);
	close(fd);
}
