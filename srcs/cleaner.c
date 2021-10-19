/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleaner.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 21:06:41 by tcristin          #+#    #+#             */
/*   Updated: 2021/09/06 21:59:30 by tcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	cleaner(struct s_val *s)
{
	int	i;

	i = 0;
	while (i < s->str_val)
		free(s->array[i++]);
	free(s->array);
	i = 0;
	while (i < s->str_val + 1)
		free(s->sub[i++]);
	free(s->sub);
	free(s->map);
	free(s->params);
}
